a = int(input())
sum, count =0, 0

while sum<a:
    count+=1
    sum+=count

if sum==a:
    print(count)
else:
    print(count-1)