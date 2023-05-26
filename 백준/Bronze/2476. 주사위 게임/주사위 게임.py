n = int(input())
point = [0, 0, 0]

for i in range(n):
    a, b, c = map(int, input().split())
    if a==b and b==c:
        point.append(10000 + (a * 1000))
    elif a==b:
        point.append(1000 + (a * 100))
    elif a==c:
        point.append(1000 + (a * 100))
    elif b==c:
        point.append(1000 + (b * 100))
    else:
        point.append(max(a,b,c)*100)

print(max(point))
