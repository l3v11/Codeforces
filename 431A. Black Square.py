a = list(map(int, input().split()))
s = input()

ans = 0
for c in s:
    if c == '1':
        ans += a[0]
    elif c == '2':
        ans += a[1]
    elif c == '3':
        ans += a[2]
    elif c == '4':
        ans += a[3]

print(ans)
