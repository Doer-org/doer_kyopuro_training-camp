N = int(input())
A = list(map(int, input().split()))

max_cnt = 0
ans = None
#kを全探索
for k in range(2, 1001):
    cnt = 0
    for a in A:
        if a % k == 0:
            cnt += 1

    if max_cnt < cnt:
        max_cnt = cnt 
        ans = k 

print(ans)
