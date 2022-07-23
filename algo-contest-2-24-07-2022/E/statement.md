# Nông trang dui dẻ

Ở một trang trại nhỏ, một người nông dân nuôi cừu kiếm sống qua ngày rất yên bình. Một ngày nọ ông phát hiện đàn cừu mình bị biến mất mấy con. Sau khi tìm hiểu thì đàn cừu của ông bị sói hoang lấy mất. Thế là ông nảy ra ý tưởng mua chó để giữ cừu.

Nông trại của ông là một hình chữ nhật với kích thước $n \times m$, mỗi con cừu, chó, sói và cỏ sẽ ở một ô vuông. Cừu và chó sẽ không di chuyển, chỉ có sói sẽ di chuyển sang $4$ ô liền kề (trên, dưới, trái, phải) để đi săn cừu. Biết ràng, sói sẽ không tấn công chó và không đi vào những ô có chó.

***Yêu cầu:*** Tìm thử xem có khả thi hay không việc người nông dân mua chó để bảo vệ đàn cừu của mình.

## Input

- Dòng đầu tiên là hai số nguyên dương $n$ và $m$ là kích thước của trang trại.
- $n$ dòng tiếp theo, mỗi dòng gồm $m$ kí tự liên tiếp là một trong các kí tự sau: `D`, `S`, `W` và `.`. Trong đó `D`, `S` và `W` lần lượt là chó, sói và cừu, còn `.` sẽ là đại diện cho cỏ.

## Constraints

- $1 \le n, m \le 500$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): có
    - $1 \le n, m \le 10$.
- Subtask $2$ ($75\%$ số điểm): không có ràng buộc gì thêm.

## Output

- Gồm một dòng duy nhất, `YES` nếu có cách đặt những chú chó sao cho đàn cừu sẽ được bảo vệ, ngược lại in `NO` nếu không thể.

## Sample Input 1

```
6 6
..S...
..S.W.
.S....
..W...
...W..
......
```

## Sample Output 1

```
YES
```

## Sample Input 2

```
1 2
SW
```

## Sample Output 2

```
NO
```