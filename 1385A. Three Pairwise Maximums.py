for _ in range(int(input())):
    arr = sorted(list(map(int, input().split())))
    if arr[1] != arr[2]:
        print("NO")
    else:
        print("YES")
        print(f"{arr[0]} {arr[0]} {arr[2]}")
