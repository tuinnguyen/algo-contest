queries = int(input())

while queries:
    queries -= 1
    n, s = list(map(int, input().split()))
    
    print(s // (n * n))