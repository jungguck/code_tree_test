n = int(input())

a = []
memory = 0

for i in range(n):
    a.append(int(input()))

    if a[i] % 2 == 1 and a[i] % 3 == 0:
        memory += a[i]

print(memory)