for _ in range(int(input())):
    n = int(input())
    s = sorted(input(), reverse=True)
    print(ord(s[0]) - ord('a') + 1)
