n, m = map(int,input().split())
a = list(map(int,input().split()))

list = [0] * n

max = list[0]
top = 0
for i in a:
    list[i - 1] += 1
    if ((list[i - 1] == max) and (i - 1 < top)):
        top = i - 1
    elif (list[i - 1] > max):
        max = list[i - 1]
        top = i - 1
    
    print(top + 1)