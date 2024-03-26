def solve():
    n = int(input())
    cur = 1
    
    while (True):
        if (cur % 3 == 0 or cur % 10 == 3):
            cur = cur + 1
            continue

        n = n - 1
        if (n == 0):
            print(cur)
            break

        cur = cur + 1

def main():
    tc = int(input())

    for _ in range(tc):
        solve()

if __name__ == "__main__":
    main()
