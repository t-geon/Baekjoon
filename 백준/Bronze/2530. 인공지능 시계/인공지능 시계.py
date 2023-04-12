hour, min, sec = map(int, input().split())
t = int(input())
r_m = (t+sec)//60
r_h = (r_m+min)//60
print(f"{(hour+r_h)%24} {(r_m+min)%60} {(sec+t)%60}")