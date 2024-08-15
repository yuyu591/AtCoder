s1, s2, s3 = input().split()
t1, t2, t3 = input().split()

if (t1 == s1):
    if (t2 == s2):
        print("Yes")
    else:
        print("No")

if (t1 == s2):
    if (t2 == s3):
        print("Yes")
    else:
        print("No")

if (t1 == s3):
    if (t2 == s1):
        print("Yes")
    else:
        print("No")