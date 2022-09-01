N = int(input())

Sn = 0
for num in str(N):
    Sn += int(num)

if N % Sn == 0: 
    print("Yes")
else: 
    print("No")
    