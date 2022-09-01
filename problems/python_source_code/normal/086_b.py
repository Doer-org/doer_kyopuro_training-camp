a, b = input().split()

#文字列で結合する
c = a + b
c = int(c)

for i in range(1000):
    if i * i == c:
        print("Yes")
        exit()

print("No")
