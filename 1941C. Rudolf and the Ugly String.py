for _ in range(int(input())):
    n = int(input())
    s = input()
    cnt = 0

    for i in range(n):
        if s[i:i+3] == "pie": cnt += 1
        if s[i:i+3] == "map": cnt += 1
        if s[i:i+5] == "mapie": cnt -= 1

    print(cnt)
