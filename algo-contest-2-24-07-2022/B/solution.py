queries = int(input())

while queries:
    queries -= 1
    x = input()
    n = len(x)
    digit = ord(x[0]) - ord('0')
    result = 10 * (digit - 1) + n * (n + 1) // 2

    print(result)