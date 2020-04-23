# https: // www.acmicpc.net/problem/11021
num = int(input())
for i in range(num):
    a, b = map(int, input().split())
    print("Case #%d: %d" % (i + 1, a + b))
