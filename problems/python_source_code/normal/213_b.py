N = int(input())
A = list(map(int, input().split()))

#スコアと選手の番号を含んだリストを生成する
new_A = []

for i in range(N):
    new_A.append([A[i], i + 1])

new_A.sort()

ans = new_A[-2][1]
print(ans)