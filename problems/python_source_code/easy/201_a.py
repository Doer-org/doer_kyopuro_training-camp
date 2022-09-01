A1, A2, A3 = map(int, input().split())

if (A1 + A2 == 2 * A3) or (A1 + A3 == 2 * A2) or (A2 + A3 == 2 * A1):
    print("Yes")
else:
    print("No")
