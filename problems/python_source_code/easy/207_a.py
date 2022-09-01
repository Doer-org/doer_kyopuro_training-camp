#解法1
#全ての合計から一番小さいものを引く

A, B, C = map(int, input().split())

ans = A + B + C - min(A, B, C)
print(ans)

#解法2
#リストで受け取ってソートする
A = list(map(int, input().split()))
A.sort()
ans = A[1] + A[2]
print(ans)
