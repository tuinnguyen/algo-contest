# Hành trình dài ngày - Editorial

Vì tổng độ dài các chuỗi $s_i$ trong tất cả $q$ truy vấn không vượt quá $2 \cdot 10^5$ nên ta có thể suy nghĩ đến việc duyệt tuần tự qua từng chuỗi mà không lo bị quá thời gian. Ta sẽ mô phỏng theo cách mà Tuân sẽ viết như sau:
- Mỗi ngày cậu chỉ viết được tối đa $3$ kí tự, do đó khi có một *chuỗi con dài nhất* $p_j$ là chuỗi con của chuỗi $s_i$ đang xét có đúng $3$ kí tự khác nhau ta sẽ ghi nhận đó là chuỗi Tuân sẽ ghi được trong $1$ ngày.
- Với lối tư duy như trên, ta sẽ cần một cấu trúc dữ liệu mà các phần tử trong đó là duy nhất. Ở đây lời giải này sẽ sử dụng `set` trong `C++`.
- Ta sẽ duyệt từng kí tự trong chuỗi $s_i$. Mỗi kí tự ta sẽ thêm vào `set`. Nếu số lượng phần tử trong `set` đã vượt quá $3$ thì ta sẽ ghi nhận Tuân vừa hoàn thành chuỗi con $p_j$ cũng có nghĩa vừa hết $1$ ngày. Do đó ta sẽ xóa `set` hiện tại để bắt đầu một ngày mới.
