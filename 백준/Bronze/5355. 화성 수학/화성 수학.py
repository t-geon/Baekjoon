a = int(input())

for i in range(a):
    b = list(input().split())
    s = float(b.pop(0))
    for j in b:
        if j=="@":
            s*=3
        elif j=="%":
            s+=5
        else:
            s-=7
    print(f"{s:.2f}")