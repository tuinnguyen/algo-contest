# Bấm nút

Một danh bạ có $10000$ số điện thoại, trong đó các số điện thoại đặc biệt nằm ở các vị trí: $1, 11, 111, 1111, 2, 22, \dots$. Có một chiếc điện thoại đặc biệt được liên kết với cuốn danh bạ này, chỉ cần bấm số thứ tự là sẽ tự động gọi vào số điện thoại ở số thứ tự tương ứng.

Đồng sẽ gọi vào các số điện thoại đặc biệt từ số đầu tiên đến số ở vị trí thứ $p$. Hỏi Đồng sẽ phải bấm bao nhiêu nút.

***Yêu cầu:*** Đưa ra số nút Đồng sẽ bấm để gọi hết các số điện thoại đặc biệt từ số đầu tiên đến số ở vị trí thứ $p$.

## Input

- Dòng đầu tiên là số nguyên $q$ - số truy vấn cần trả lời.
- $q$ dòng tiếp theo, mỗi dòng là một số nguyên $p$ - vị trí của một số điện thoại đặt biệt bất kì trong cuốn danh bạ.

## Constraints

- $1 \le q \le 10^5$.
- $p \in [1, 11, 111, \dots, 9, 99, 999, 9999]$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): có $q = 1$.
- Subtask $2$ ($75\%$ số điểm): không có ràng buộc gì thêm.

## Output

- Gồm $q$ dòng, mỗi dòng là đáp án tương ứng cho truy vấn thứ $i$ - là số nút ít nhất cần bấm.

## Sample Input

```
3
1
33
777
```

## Sample Output

```
1
26
66
```