k, n, m = map(int, input().split())
total = k*n
total = m-total
if total>=0:
    print("0")
else:
    print(-total)