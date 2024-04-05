for _ in range(int(input())):
    a, b = map(int, input().split())

    if a != 0 and b == 0: print(a + 1)
    elif a == 0 and b != 0: print(1)
    elif a == 0 and b == 0: print(1)
    else: print((a * 1 + b * 2) + 1)
