from collections import deque
# dequqは前にも後ろにも要素を追加できるlist
N = int(input())
A = list(map(int, input().split()))

ans = deque()
for i in range(N):
    a = A[i]
    if i % 2 == 0:
        ans.append(a)
    else:
        ans.appendleft(a)

#dequeからリストに直す
ans = list(ans)
if N % 2 == 1: ans.reverse()

print(' '.join(map(str, ans)))
