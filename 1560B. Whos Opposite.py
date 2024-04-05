for _ in range(int(input())):
    a, b, c = map(int, input().split())
    n = max(a, b) - min(a, b)

    if (a > 2 * n or b > 2 * n or c > 2 * n):
        print(-1)
    elif c > n:
        print(c - n)
    else:
        print(c + n)
