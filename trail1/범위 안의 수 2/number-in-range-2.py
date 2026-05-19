a = []
sum = 0
cnt = 0

for i in range(10):
    a.append(int(input()))

    if a[i] >= 0 and a[i] <= 200:
        sum += a[i]
        cnt += 1

ave = sum / cnt

print(sum, end=" ")
print(f"{ave:.1f}")