n = int(input())

for i in range(1, n + 1):
    # i가 2의 배수거나 3의 배수인지 확인
    if i % 2 == 0 or i % 3 == 0:
        print(1, end=" ")
    else:
        print(0, end=" ")