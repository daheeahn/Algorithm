# a, b = map(int, input().split())

n = int(input("몇 쌍의 합을 출력하시겠어요? "))

for i in range(n):
    a, b = map(int, input().split())
    print(a + b)
