N, K = map(int, input().split())
# リスト内包表記で受け取り
AB = [list(map(int, input().split())) for _ in range(N)]

#aの小さい順でソート
AB.sort()

total = 0
for a, b in AB:
    total += b 
    if total >= K:
        print(a)
        exit()
