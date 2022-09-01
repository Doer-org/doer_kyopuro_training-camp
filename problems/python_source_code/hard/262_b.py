N, M = map(int, input().split())

#N*Nの二次元配列
edges = [[0] * N for _ in range(N)]

for _ in range(M):
    u, v = map(int, input().split())
    #0-idxにする
    u -= 1
    v -= 1
    edges[u][v] = 1
    edges[v][u] = 1 

ans = 0
for a in range(N):
    for b in range(a + 1, N):
        for c in range(b + 1, N):
            if edges[a][b] == 1 and edges[b][c] == 1 and edges[c][a] == 1:
                ans += 1

print(ans)
