for _ in range(int(input())):
    n = int(input())
    a = sorted(map(int, input().split()))

    if n == 1:
        if a[0] == 1:
            print("YES")
        else:
            print("NO")
    else:
        if a[n - 1] - 1 - a[n - 2] >= 1: print("NO")
        else: print("YES")
