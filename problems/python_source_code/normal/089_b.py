N = int(input())
S = input().split()

bag = set()

for color in S:
    bag.add(color)

if len(bag) == 3:
    print("Three")
else:
    print("Four")
    