N,A,B = map(int,input().split())

sum_total = 0
for i in range(1,N+1):
    n = str(i)
    total = 0
    for j in range(len(n)):
        total += int(n[j])
    if (total >= A) and (total <= B):
        sum_total += i
print(sum_total)