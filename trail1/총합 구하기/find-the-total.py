a, b = map(int, input().split())

cnt = 0

start = min(a, b)
end = max(a, b)

for i in range(start, end + 1):
    if i % 6 == 0 and i % 8 != 0:
        cnt += i

print(cnt)