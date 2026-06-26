N = int(input())

for i in range(2, N):
    if N % i == 0:
        print("C")  # 대문자 C인 경우
        break
else:
    print("N")  # 대문자 N인 경우