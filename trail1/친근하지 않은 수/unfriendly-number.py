n = int(input())
cnt = 0

for i in range(1, n + 1):
    # 2로도 안 나누어떨어지고, 3으로도 안 나누어떨어지고, 5로도 안 나누어떨어지는 수
    if i % 2 != 0 and i % 3 != 0 and i % 5 != 0:
        cnt += 1  # 들여쓰기 정렬 완료!

print(cnt)