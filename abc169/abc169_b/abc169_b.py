N = int(input())
A = list(map(int,input().split()))

answer = 1
for i in range(N):
    if(A[i] == 0):
        print(0)
        exit()

for i in range(N):
    answer *= A[i]
    if (answer > 10**18):
        print(-1)
        exit()

print(answer)