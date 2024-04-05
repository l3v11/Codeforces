for _ in range(int(input())):
    n, m, k = map(int, input().split())
    b = list(map(int, input().split()))
    c = list(map(int, input().split()))

    cnt = 0
    for i in range(n):
        for j in range(m):
            cnt += b[i] + c[j] <= k
    print(cnt)
