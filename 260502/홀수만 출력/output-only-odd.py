inp = input()
arr = inp.split()

a = int(arr[0])
b = int(arr[1])

c = []
for i in range(a, b+1, 2):
    c.append(i)

print(*c)