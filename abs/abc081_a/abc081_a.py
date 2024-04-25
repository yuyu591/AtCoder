i = input()
list = []
for x in range(3):
    list.append(i[x])
count = 0
for y in list:
    if int(y) == 1:
        count = count + 1
print(count)