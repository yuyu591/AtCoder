N,P,Q = map(int,input().split())
A = list(map(int,input().split()))

resA = []
count = 0
for a in A:
    resA.append(a % P)
for i in range(N):
    for j in range(i+1,N):
        for k in range(j+1,N):
            for l in range(k+1,N):
                for m in range(l+1,N):
                    if (resA[i]*resA[j]*resA[k]*resA[l]*resA[m])%P==Q:
                        count += 1
print(count)