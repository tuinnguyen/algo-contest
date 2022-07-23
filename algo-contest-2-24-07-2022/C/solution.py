n, m = map(int, input().split())
seg = [list(map(int, input().split())) for i in range(n)]
def bad(x):
	for i in range(n):
		if (seg[i][0] <= x and x <= seg[i][1]): return False
	return True
ans = list(filter(bad, [i for i in range(1, m + 1)]))
print(len(ans))
print(' '.join([str(x) for x in ans]))