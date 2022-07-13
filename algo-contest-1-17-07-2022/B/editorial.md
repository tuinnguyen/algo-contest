# Quà tặng - Editorial

Để tối ưu số ảnh lấy ra, ta sẽ gọi $p$ là giá trị nhỏ nhất trong dãy $A = [a_1, a_2, a_3, \dots, a_n]$. Khi đó, mỗi chiếc thẻ nhớ sau khi được lấy ảnh ra sẽ có $p$ tấm ảnh. Lúc này tổng số ảnh Tuân cần lấy ra ít nhất sẽ là:
$$ans = \sum\limits_{i = 1}^{n}(a_i - p)$$