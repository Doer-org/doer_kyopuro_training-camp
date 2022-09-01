S = input()

ans = 0
for elem in S:
    if elem == '+': ans += 1
    else: ans -= 1

print(ans)
