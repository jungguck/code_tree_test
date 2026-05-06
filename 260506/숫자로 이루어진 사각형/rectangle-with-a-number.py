n = int(input())

def matrix(n):          # ← : 빠짐
    for i in range(n):
        for j in range(n):
            c = (i*n + j) % 9 + 1
            print(c, end=' ')
        print()         # ← 줄바꿈

matrix(n)               # ← 함수 호출 빠짐