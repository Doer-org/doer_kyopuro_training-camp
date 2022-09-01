N, M, T = map(int, input().split())
A = list(map(int, input().split()))

bonus_time = [0] * (N + 1)

for _ in range(M):
    x, y = map(int, input().split())
    bonus_time[x] = y

left_time = T 
for room in range(1, N):
    left_time += bonus_time[room]
    left_time -= A[room - 1]

    if left_time <= 0:
        print("No")
        exit()

print("Yes")
