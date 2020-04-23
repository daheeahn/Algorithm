a = input()
for b in range(0, len(a), 10):
    print(a[b:b + 10])  # 문자열 슬라이싱

# range(a, b, c): a 이상 b 미만까지의 숫자 시퀀스를 생성. c씩 증가
