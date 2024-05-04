N,X,Y,Z = map(int,input().split())

for a in range(abs(X-Y)):
    if X > Y:
        X -= 1
        if (X == Z):
            print("Yes")
            exit()
    else:
        Y -= 1
        if (Y == Z):
            print("Yes")
            exit()
print("No")