N = int(input())
l = list(map(int,input().split()))

totalA = 0
totalB = 0
for i in range(N):
    number = max(l)
    l.remove(max(l))
    if i % 2 == 0:
        totalA += number
    else:
        totalB += number

print(totalA - totalB)