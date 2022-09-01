x1, x2, x3, x4, x5 = map(int, input().split())

A = [x1, x2, x3, x4, x5]
for i in range(1, 6):
    #iがAに存在するかどうか
    if i not in A:
        print(i)
        #forループ終了
        break
    