n = int(input())
coins = sorted(list(map(int, input().split())), reverse=True)
total = sum(coins)

take, takeSum = 0, 0
while(takeSum <= total / 2):
    takeSum += coins[take]
    take = take + 1

print(take)
