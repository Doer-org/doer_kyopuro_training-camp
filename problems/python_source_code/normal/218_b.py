P = list(map(int, input().split()))

ans = ''
for p in P:
    alp_num = ord('a') + p - 1
    ans += chr(alp_num)

print(ans)
