N = int(input())
A = list(map(int, input().split()))

# m = a1 * a2 * ... * an - 1にする
ans = 0
for a in A:
    ans += a - 1

print(ans)
