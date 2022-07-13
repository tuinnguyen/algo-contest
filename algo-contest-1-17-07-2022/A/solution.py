queries = int(input())

while (queries):
    queries -= 1
    s = input()
    n = len(s)
    ans = 0
    f = dict()
    
    for char in s:
        f[char] = 1
        if len(f) > 3:
            f.clear()
            f[char] = 1
            ans += 1
    
    if len(f) > 0:
        ans += 1
    
    print(ans)
