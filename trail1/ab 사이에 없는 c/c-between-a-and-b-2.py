# 1. 공백을 기준으로 세 정수 a, b, c를 입력받습니다.
a, b, c = map(int, input().split())

# 배수가 존재하는지 확인하기 위한 변수 (깃발)
satisfied = False

# 2. a부터 b까지 반복하며 c의 배수가 있는지 확인합니다.
for i in range(a, b + 1):
    if i % c == 0:
        satisfied = True
        break  # 배수를 하나라도 찾았다면 더 볼 필요 없이 탈출!

# 3. 배수가 전혀 없다면(satisfied가 여전히 False라면) 
if not satisfied:
    print("YES")  # 문제의 요구 출력 형식에 맞게 변경하세요.
else:
    print("NO")