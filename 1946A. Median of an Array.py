def solve():
    n = int(input())
    arr = list(map(int, input().split()))

    arr.sort()

    med = (n + 1) // 2
    ans = 0
    for i in range(med, n + 1):
        if arr[i - 1] == arr[med - 1]:
            ans += 1

    print(ans)

def main():
    tc = int(input())

    for _ in range(tc):
        solve()

if __name__ == "__main__":
    main()
