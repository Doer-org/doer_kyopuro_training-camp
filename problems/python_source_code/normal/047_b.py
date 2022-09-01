W, H, N = map(int, input().split())

xleft, xright = 0, W 
yleft, yright = 0, H 

for _ in range(N):
    x, y, a = map(int, input().split())
    if a == 1:
        if x > xleft:
            xleft = x 

    if a == 2:
        if x < xright:
            xright = x 

    if a == 3:
        if y > yleft:
            yleft = y 

    if a == 4:
        if y < yright:
            yright = y 

if (xleft > xright) or (yleft > yright):
    print(0)
else:
    print((xright - xleft) * (yright - yleft))
