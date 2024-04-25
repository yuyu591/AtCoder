N = int(input())
l = [int(input()) for i in range(N)]

l.sort()
l.reverse()
current = l[0]
count = 1
for x in l:
    if current > x:
        current = x
        count += 1
        
print(count)