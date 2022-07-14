# Hành trình dài ngày

Bước xuống xe, đặt chân tại thành phố Đà Lạt thơ mộng, Tuân hít lấy hít để bầu không khí tươi mát đã lâu không được thưởng thức. Bước vào căn nhà gỗ cậu bị thu hút bởi sự ấm áp mà nơi đây đem lại. Những cảm giác khó mà kiếm tìm nơi cậu làm việc. Cậu nhanh chóng diện một bộ đồ thật ấm áp, chuẩn bị máy ảnh cùng với một cuốn sổ tay và một cây bút. Cảm giác vừa tản bộ, vừa chụp ảnh, lưu lại những dòng suy nghĩ thoáng qua trong đầu khiến cậu run lên vì sung sướng.

Song, vì tai nạn xe lần trước, mỗi lần cậu đặt bút cậu chỉ có thể nhớ tối đa $3$ kí tự khác nhau trong bảng chữ cái tiếng anh mỗi ngày. $s = "\text{happyday}"$ thì cậu phải mất $2$ ngày để viết. Cụ thể, ngày thứ nhất cậu sẽ ghi cụm $"\text{happ}"$ và ngày thứ hai cậu sẽ ghi cụm $"\text{yday}"$.

Dù không thể ghi chú được như trước đây nhưng cảm giác ghé thăm Đà Lạt cũng đã khiến Tuân đủ thỏa mãn. Khi nào hoàn thành chuỗi $s$ cần viết cậu sẽ quay về lại thành phố. Hãy giúp Tuân xác định cậu sẽ ở Đà Lạt trong bao lâu.

***Yêu cầu:*** Xác định số ngày Tuân cần tối thiểu để viết chuỗi $s$.

## Input

- Dòng đầu tiên là số nguyên dương $q$ - số truy vấn cần trả lời.
- $q$ dòng tiếp theo, mỗi dòng là một chuỗi $s_i$ gồm các kí tự in thường trong bảng chữ cái tiếng anh.

## Constraints

- $1 \le q \le 10^4$.
- Độ dài chuỗi $s_i$ không quá $2 \S-dtdot 10^5$ kí tự.
- Tổng độ dài của các chuỗi $s_i$ trong tất cả các truy vấn không quá $2 \cdot 10^5$ kí tự.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): có
    - $q = 1$.
    - Độ dài chuỗi $s_i$ không quá $100$ kí tự.
- Subtask $2$ ($75\%$ số điểm): không có ràng buộc gì thêm.

## Output

- Gồm $q$ dòng, mỗi dòng là một số nguyên cho biết số ngày Tuân cần để hoàn thành chuỗi $s_i$ tương ứng.

## Sample Input

```
6
lollipops
stringology
abracadabra
codeforces
test
f
```

## Sample Output

```
2
4
3
4
1
1
```