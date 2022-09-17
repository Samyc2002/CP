s = input()
st = s.split("WUB")
for i in range(len(st)):
    if st[i] == "":
        continue
    if i != len(st) - 1:
        print(st[i], end=" ")
    else:
        print(st[i])
