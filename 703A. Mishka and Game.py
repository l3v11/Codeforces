n = int(input())    
mc, cc = 0, 0

for _ in range(n):
    m, c = map(int, input().split())

    if m > c: mc += 1
    elif m < c: cc += 1

if mc > cc:
    print("Mishka")
elif mc < cc:
    print("Chris")
else: print("Friendship is magic!^^")
