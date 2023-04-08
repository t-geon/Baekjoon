a=int(input())
b=input()
back=0
sum=0

for i in range(1,len(b)+1):
    back = a * int(b[-i])
    print(back)
    sum += back * (10**(i-1))

print(sum)