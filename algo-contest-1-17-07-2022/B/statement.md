# Quà tặng

Sau những ngày đi Đà Lạt Tuân có trong máy rất nhiều tấm hình đẹp, khổ nỗi mỗi lần cậu chụp cậu cứ thay thẻ nhớ nên số lượng hình ở mỗi thẻ cứ lộn hết cả lên. Trước khi đi chơi, cậu hứa với nhóm bạn gồm $n$ người, mỗi người sẽ có ảnh đẹp ở Đà Lạt. Để cho công bằng, dĩ nhiên số ảnh mỗi người nhận được sẽ là như nhau. Để cho tiện gửi ảnh, cậu còn mua sẵn $n$ chiếc thẻ nhớ và chuẩn bị $n$ bức thư tay từ trước. Thư tay đã xong chỉ riêng mỗi ảnh thì lại lộn xộn cả. Bây giờ cậu quyết định sẽ lấy bớt một số lượng ảnh ở mỗi thẻ sao cho sau quá trình này thì mỗi chiếc thẻ sẽ có số ảnh bằng nhau. Dĩ nhiên là một người thông minh, Tuân sẽ cố gắng lấy ít ảnh nhất có thể. $n$ chiếc thẻ nhớ, chiếc thẻ thứ $i$ có $a_i$ tấm ảnh.

***Yêu cầu:*** Tìm số lượng ảnh ít nhất Tuân cần lấy để số ảnh trong $n$ tấm thẻ nhớ đều bằng nhau.

## Input

- Dòng đầu tiên là số nguyên dương $q$ - số truy vấn cần trả lời. Mỗi truy vấn có dạng như sau:
    - Dòng đầu tiên là số nguyên dương $n$ - số thẻ nhớ Tuân có.
    - Dòng thứ hai gồm $n$ số nguyên dương $a_1, a_2, a_3, \dots, a_n$ với $a_i$ là số ảnh trong thẻ nhớ thứ $i$.

## Constraints

- $1 \le q \le 10000$.
- $1 \le n \le 50$.
- $1 \le a_i \le 10^7$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): có
    - $q = 1$.
    - $1 \le n \le 10$.
    - $1 \le a_i \le 100$.
- Subtask $2$ ($75\%$ số điểm): không có ràng buộc gì thêm.

## Output

- Gồm $q$ dòng, dòng thứ $i$ là câu trả lời cho truy vấn thứ $i$ - là số ảnh ít nhất Tuân cần lấy bớt ra.

## Sample Input

```
5
5
1 2 3 4 5
6
1000 1000 5 1000 1000 1000
10
1 2 3 5 1 2 7 9 13 5
3
8 8 8
1
10000000
```

## Sample Output

```
10
4975
38
0
0
```