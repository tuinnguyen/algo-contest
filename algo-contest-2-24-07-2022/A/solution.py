n, p = list(map(int, input().split(' ')))
info = list()
for i in range(0, n):
    info.append(input())

if info[p - 1] == "Infected":
    print("YES")
else:
    print("NO")