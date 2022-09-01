#解法1
N, X, T = map(int, input().split())

#たこ焼きを作った回数
cnt = 0

ans = 0
while cnt * X < N:
    cnt += 1
    ans += T 

print(ans)

#解法2(切り上げを使う)
N, X, T = map(int, input().split())

#たこ焼きを作る必要がある回数, N/Xの切り上げた回数分必要となる
cnt = (N + X - 1) // X

ans = cnt * T
print(ans)
