N = int(input())
T = list(map(int, input().split()))
M = int(input())
PX = [list(map(int, input().split())) for _ in range(M)]

for i in range(M):
    p, x = PX[i]
    p -= 1
    ans = 0
    for j in range(N):
        if j == p:
            ans += x 
        else:
            ans += T[j]
    print(ans)
 