n = int(input())
x = list(map(int, input().split()))
single, couple, tripple, ans = 0, 0, 0, 0

for i in range(n):
    if x[i] == 4: ans += 1
    elif x[i] == 3: tripple += 1
    elif x[i] == 2: couple += 1
    elif x[i] == 1: single += 1

while tripple:
    if single:
        ans += 1
        tripple -= 1
        single -= 1
    else:
        ans += 1
        tripple -= 1

tmp = couple // 2
couple -= 2 * tmp
ans += tmp

while couple:
    ans += 1
    if single: single -= 1
    if single: single -= 1
    couple -= 1

tmp = single // 4
single -= 4 * tmp
ans += tmp

if single: ans += 1

print(ans)
