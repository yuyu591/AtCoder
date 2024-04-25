N = int(input())
l = list(map(int,input().split()))
count = 0
while True:
    for x in range(N):
        if (l[x] % 2 != 0):
            print(count)
            exit()
        else:
            l[x] = int(l[x]/2)
    count = count + 1