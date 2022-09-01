N = int(input())
S = input()

ans = 0
for i in range(N):
    X = S[:i]
    Y = S[i:]
    cnt = 0 
    for alp in "abcdefghijklmnopqrstuvwxyz":
        if alp in X and alp in Y:
            cnt += 1

    if ans < cnt:
        ans = cnt 

print(ans)
