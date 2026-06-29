a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())

a_list = [a, b, c, d, e]

cnt = 0

for i in a_list:
    if i % 3 == 0:  # 1. 여기에 콜론(:)을 추가했습니다!
        cnt += 1

if cnt == 5:
    print("1")
else:
    print("0")