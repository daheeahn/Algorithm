# try except 처리
# https://wikidocs.net/30

while True:
    try:
        a, b = map(int, input().split())
        print(a + b)
    except:
        break
