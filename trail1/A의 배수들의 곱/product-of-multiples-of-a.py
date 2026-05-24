a, b = map(int, input().split())

# b가 a보다 크거나 같을 때만 배수가 존재함 (a가 b 이하일 때)
if b >= a:
    cnt = 1
    for i in range(a, b + 1, a):
        cnt *= i
    print(cnt)