# Hoành độ

Trên trục hoành $Ox$, tại các điểm có hoành độ nguyên $1, 2, 3, \dots, m$ sẽ có $n$ đoạn thẳng $[u, v]$ và các điểm nằm trong đoạn $[u, v]$ sẽ bị che lấp. Có bao nhiêu hoành độ trong đoạn $[1, m]$ không bị che lấp.

Lưu ý: Các đoạn thẳng có thể chống lên nhau, liên tiếp nhau hoặc trúng nhau đều được.

***Yêu cầu:*** Đếm số hoành độ nguyên không bị che lấp.

## Input

- Dòng đầu tiên gồm hai số nguyên dương $n$ và $m$ - lần lượt là số đoạn $[u, v]$ và giá trị hoành độ lớn nhất.
- $n$ dòng tiếp theo, mỗi dòng gồm hai số $u$ và $v$ thể hiện hai đầu mút của một đoạn thẳng.

## Constraints

- $1 \le n, m \le 100$.
- $1 \le u, v, \le m$.

## Output

- Gồm hai dòng, dòng đầu tiên là số lượng hoành độ nguyên không bị che lấp. Nếu không có hoành độ nào, chỉ in số $0$.
- Nếu có ít nhất $1$ hoành độ không bị che lấp, in các hoành độ đó ra trên dòng thứ hai theo thứ tự tăng dần.

## Sample Input

```
3 5
2 2
1 2
5 5
```

## Sample Output

```
2
3 4
```