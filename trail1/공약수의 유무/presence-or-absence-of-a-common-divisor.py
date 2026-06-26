# 한 줄에 공백으로 구분되어 입력되는 A와 B를 각각 정수로 받습니다.
A, B = map(int, input().split())

# A부터 B까지 모든 숫자를 확인합니다.
for i in range(A, B + 1):
    # i가 1920과 2880의 공약수인지 확인
    if 1920 % i == 0 and 2880 % i == 0:
        print(1)
        break
else:
    # 범위 내에 공약수가 없으면 0 출력
    print(0)