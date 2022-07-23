# Bấm nút  - Editorial

Ta có thể giải bài này bằng cách duyệt đếm số lượng chữ số. Song để ý một chút ta có thể giải quyết bài toán này trong $O(1)$ như sau:

Gọi $digit$ là chữ số của số $x$ và $len$ là dộ dài của $x$. Vì $1 \le x \le 10000$ nên độ dài ($len$) của $x$ không quá $4$.

Dễ thấy, với chũ số $1$ thì ta có các số điện thoại đặc biệt ở các vị trí: $1, 11, 111, 1111$. Do đó có tổng cộng $1 + 2 + 3 + 4 = 10$ nút cần bấm. Tương tự với các chữ số $2, 3, \dots$.

Do vậy ta có công thức: $result = 10 \cdot (digit - 1) + \dfrac{len \cdot (len + 1)}{2}$.