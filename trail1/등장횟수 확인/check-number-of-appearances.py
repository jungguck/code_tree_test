a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())

team = [a, b, c, d, e]

cnt = 0

for i in team:
    if i % 2 == 0:
        cnt += 1

print(cnt)