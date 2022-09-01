N, X = map(int, input().split())

dp = [[False] * (X + 1) for _ in range(N + 1)]
dp[0][0] = True

for turn in range(1, N + 1):
    a, b = map(int, input().split())
    for i in range(X + 1):
        if dp[turn - 1][i]:
            if i + a <= X:
                dp[turn][i + a] = True 

            if i + b <= X:
                dp[turn][i + b] = True

if dp[N][X]:
    print("Yes")
else:
    print("No")
