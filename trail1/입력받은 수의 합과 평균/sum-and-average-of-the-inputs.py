n = int(input())

a = []
sum = 0

for i in range(n):
    a.append(int(input()))
    sum += a[i]

ave = sum / n

print(sum, end=" ")
print(f"{ave:.1f}")