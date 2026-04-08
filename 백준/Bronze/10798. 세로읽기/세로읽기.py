words = [input().strip() for _ in range(5)]

answer = []

for col in range(15):      # 각 줄의 최대 길이가 15
    for row in range(5):   # 총 5줄
        if col < len(words[row]):
            answer.append(words[row][col])

print(''.join(answer))