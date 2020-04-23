# EOFrror : 읽어들일 데이터가 더 이상 없을 때 발생하는 에러
while True:
    try:
        print(input())
    except EOFError:
        break

# 이건 오답
# s1 = input()
# print(s1)
