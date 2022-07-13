# Chuyến tàu - Editorial

Dễ thấy ta sẽ thêm các toa tàu vào những vị trí có tính chất $a_i > i$. Khi đó cần thêm tối thiểu $a_i - i$ toa tàu. Vậy để cả đoàn tàu thỏa mãn quy định của nhà ga ta cần thêm tối thiếu $m = \max(0, \max\limits_{i = 1}^{n}(a[i] - i))$ toa tàu vào phía trước của đoàn tàu. Và đó cũng là đáp án cần tìm.
