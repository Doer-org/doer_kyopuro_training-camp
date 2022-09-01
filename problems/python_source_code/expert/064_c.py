N = int(input())
A = list(map(int, input().split()))

colors = set()
free_color = 0

for a in A:
    if a <= 399: colors.add(0)
    elif a <= 799: colors.add(1)
    elif a <= 1199: colors.add(2)
    elif a <= 1599: colors.add(3)
    elif a <= 1999: colors.add(4)
    elif a <= 2399: colors.add(5)
    elif a <= 2799: colors.add(6)
    elif a <= 3199: colors.add(7)
    else: free_color += 1

if len(colors) > 0:
    mn = len(colors)
    mx = len(colors) + free_color
else:
    mn = 1 
    mx = free_color
    
print(mn, mx)
