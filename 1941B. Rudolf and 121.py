def solve():
    n = int(input())
    arr = list(map(int, input().split()))

    for i in range(n - 2):
        if arr[i] < 0:
            print("NO")
            return
        tmp = arr[i]
        arr[i] -= tmp
        arr[i + 1] -= 2 * tmp
        arr[i + 2] -= tmp

    for num in arr:
        if num != 0:
            print("NO")
            return
    print("YES")

def main():
    tc = int(input())

    for _ in range(tc):
        solve()

if __name__ == "__main__":
    main()
