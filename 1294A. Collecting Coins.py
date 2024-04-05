for _ in range(int(input())):
    a, b, c, n = map(int, input().split())
    sum = a + b + c + n

    if sum % 3 or 3 * max(a, b, c) > sum:
        print("NO") 
    else:
        print("YES")
