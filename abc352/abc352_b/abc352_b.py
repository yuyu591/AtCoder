S = list(input())
T = list(input())

list = []
t = 0
for i in range(len(S)):
    s = S[i]
    while(s != T[t]):
        t += 1
    list.append(t+1)
    t += 1
print(*list)