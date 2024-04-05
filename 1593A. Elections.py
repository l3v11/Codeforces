for _ in range(int(input())):
    a, b, c = map(int, input().split())
    x = max(0, max(b, c) - a + 1)
    y = max(0, max(a, c) - b + 1)
    z = max(0, max(a, b) - c + 1)
    print(x, y, z)
