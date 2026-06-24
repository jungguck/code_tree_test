n = int(input())

c = 0

while True:
    if n == 1:
        break

    n //= 2
    c += 1

print(c)