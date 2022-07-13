queries = int(input())

while queries:
    queries -= 1
    n = int(input())
    a = list(map(int, input().split()))
    
    ans = 0
    for i in range(0, n):
        if a[i] > i + 1:
            ans = max(ans, a[i] - i - 1)
            
    print(ans)
