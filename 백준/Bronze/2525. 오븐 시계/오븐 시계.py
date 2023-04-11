hour, min = map(int, input().split())
t = int(input())
r_h = (t+min)//60
print(f"{(hour+r_h)%24} {(t+min)%60}")