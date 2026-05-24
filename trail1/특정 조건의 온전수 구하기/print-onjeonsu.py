n = int(input())

for i in range(1, n + 1):
    # 1. 2로 나누어 떨어지면 탈락
    if i % 2 == 0:
        continue
        
    # 2. 일의 자리가 5이면 탈락
    if i % 10 == 5:
        continue
        
    # 3. 3의 배수이면서 9의 배수는 아니면 탈락
    if i % 3 == 0 and i % 9 != 0:
        continue
        
    # 위 세 조건을 모두 무사히 통과한 수(온전수)만 출력
    print(i, end=" ")