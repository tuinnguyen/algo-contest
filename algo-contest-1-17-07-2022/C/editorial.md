# Lá thăm - Editorial

Gọi số thăm trúng thưởng có trong $n + 1$ lá thăm là $x$. Ta có: $s = x \cdot n^2 + u$ với $u$ là tổng các lá thăm còn lại.
Giả sử nếu không có lá thăm trúng thưởng nào ($x = 0$) thì ta có: $s = u$ hay $s = a_1 + a_2 + a_3 + \dots + a_{n + 1}$. Vì $0 \le a_i < n$ và có $n + 1$ lá thăm nên $\sum\limits_{i = 1}^{n + 1}(n - 1) = (n - 1) \cdot (n + 1) = n^2 - 1$. Suy ra $u \le n^2 - 1$.
Ta suy ra: $\left\lfloor\dfrac{s}{n^2}\right\rfloor = \left\lfloor\dfrac{x \cdot n^2 + u}{n^2}\right\rfloor = \left\lfloor x + \dfrac{u}{n^2}\right\rfloor = x$ là giá trị cần tìm.
