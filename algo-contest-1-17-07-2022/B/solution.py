queries = int(input())

while queries:
    queries -= 1
    n = int(input())
    a = list(map(int, input().split()))

    a = sorted(a)
    ans = 0
    for i in range(1, len(a)):
        ans += a[i] - a[0]
    
    print(ans)
