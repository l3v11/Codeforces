for _ in range(int(input())):
    n = int(input())
    s = input()

    left, right, ans = 0, n - 1, n
    while left < right and s[left] != s[right]:
        ans -= 2
        left += 1
        right -= 1

    if ans > 0:
        print(ans)
    else:
        print(0)
