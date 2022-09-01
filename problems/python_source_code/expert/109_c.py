# gcdをimport
from math import gcd

N, X = map(int, input().split())
xs = list(map(int, input().split()))

diff = []
for x in xs:
    diff.append(abs(X - x))

#全てのgcdを取る
ans = 0
for d in diff:
    ans = gcd(ans, d)

print(ans)
