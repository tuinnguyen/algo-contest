# Cách li

Tạm biệt chuyến đi Đà Lạt đầy kỉ niệm, Tuân lên xe trở về Sài Gòn hối hả. Dừng xe ở một trạm y tế, cậu ghé vào để làm xét nghiệm phòng chống Covid - $19$. Dạo gần đây dịch đang có những chuyển biến xấu đi, cậu không muốn mình lại đem phiền phức đến cho những người xung quanh cậu.

Trạm y tế hiện tại có $n$ người (kể cả cậu). Sau khi lấy mẫu và thực hiện kiểm tra, nhân viên y tế lần lượt thông báo danh sách những người bị nhiễm và không. Danh sách gồm $n$ dòng, mỗi dòng sẽ có một trong hai thông tin: "Infected" nếu đã bị nhiễm Covid - $19$ và "Save" trong trường hợp ngược lại. Những người bị nhiễm Covid sẽ được khuyến cáo cách li tại nhà trong vòng $3$ tuần. Tuân là người thứ $p$ trong danh sách $n$ người kia.

***Yêu cầu:*** Cho biết Tuân có phải tự cách li ở nhà trong $3$ tuần tiếp theo hay không. Nếu có in `YES` ngược lại in `NO`.

## Input

- Dòng đầu tiên gồm hai số nguyên $n$ và $p$ lần lượt là số lượng người đi xét nghiệm và thứ tự của Tuân trong $n$ người.
- $n$ dòng tiếp theo, mỗi dòng gồm một trong hai thông tin "Infected" hoặc "Save" (không có dấu "") như mô tả ở trên.

## Constraints

- $1 \le p \le n \le 10000$.

## Output

- In ra `YES` hoặc `NO` tùy theo việc Tuân có bị nhiễm Covid hoặc không.

## Sample Input

```
4 3
Infected
Save
Save
Infected
```

## Sample Output

```
NO
```