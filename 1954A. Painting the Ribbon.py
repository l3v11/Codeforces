for _ in range(int(input())):
    n, m, k = map(int, input().split())
    if (m - 1) * (n // m) + max((n % m) - 1, 0) > k:
        print("YES")
    else:
        print("NO")
