a = int(input())

for i in range(a):
    n1, n2 = map(int, input().split())
    print(f"Case #{i+1}: {n1+n2}")