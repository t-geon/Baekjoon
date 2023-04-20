a = int(input())

for i in range(a):
    n, str = input().split()
    num = int(n)
    result = ''
    for j in range(len(str)):
        result+=str[j]*num
    print(result)