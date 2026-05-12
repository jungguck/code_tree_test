a, b = map(int, input().split())

def num(a):
    if a % 2 == 0:
        return a + 3
    else:
        return a * 2

while a <= b:
    print(a, end=" ")  # a를 먼저 출력
    a = num(a)         # 그 다음 변환