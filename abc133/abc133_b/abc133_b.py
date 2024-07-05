import math

N,D = map(int,input().split())
X = [list(map(int, input().split())) for l in range(N)]

count = 0
for i in range(N): #i番目の点
    for j in range(i+1,N): #j番目の点
        dis_double = 0
        for k in range(D):
            dis_double += (X[i][k] - X[j][k]) ** 2
        dis = math.sqrt(dis_double)
        if (dis.is_integer()):
            count += 1

print(count)