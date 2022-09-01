N, T = map(int, input().split())
ts = list(map(int, input().split()))

ans = 0
for i in range(N):
    t = ts[i]
    #最後ではない場合
    if i != N - 1:
        nx_t = ts[i + 1]
        if t + T < nx_t:
            ans += T 
        else:
            ans += nx_t - t 
    else:
        ans += T 

print(ans)

