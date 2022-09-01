S1 = input()
S2 = input()
S3 = input()
T = input()

ans = ''
for num in T:
    if num == '1': 
        ans += S1
    elif num == '2':
        ans += S2 
    else:
        ans += S3 

print(ans)
