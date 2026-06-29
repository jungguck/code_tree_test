n = int(input())

# 소수인지 확인하기 위한 깃발 (처음엔 소수라고 가정)
is_prime = True

# 1은 소수가 아니므로 예외 처리 (제한 조건에 1이 포함될 수 있으므로)
if n == 1:
    is_prime = False
else:
    # 2부터 n-1까지의 숫자로 n을 나누어 봅니다.
    for i in range(2, n):
        if n % i == 0:       # 만약 하나라도 나누어떨어지는 수가 있다면?
            is_prime = False # 소수가 아님!
            break            # 더 볼 필요 없으니 탈출!

# 결과 출력
if is_prime:
    print("P")  # 소수 (Prime)
else:
    print("C")  # 합성수 (Composite)