n = int(input())
num = 2
arr = []

while num <= n:
    if n % num == 0:
        arr.append(num)
        n/=num
    else:
        num+=1

arr.sort()
for i in arr:
    print(i)
