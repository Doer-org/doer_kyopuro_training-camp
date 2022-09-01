N = int(input())
A = list(map(int, input().split()))

ans = 10 ** 18 
# iに合わせる
for i in range(-100, 101):
    tmp = 0
    for a in A:
        tmp += (i - a) ** 2 

    if ans > tmp:
        ans = tmp 

print(ans)
