# Lá thăm

Trước khi lên xe về Sài Gòn lại vào sáng mai Tuân quyết định đi vạo một vòng quanh Đà Lạt lần cuối. Đang ngắm nhìn dòng người đi qua lại tấp nập, lọt vào mắt của Tuân là một gánh hàng chơi rút thăm trúng thưởng. Tính tò mò trong cậu trỗi dậy và cậu bước lại đó. Trước mặt cậu là cô gái ở *trạm dừng chân* ngày trước. Lần này vẫn là cô nhưng trông rất khác, xinh đẹp khiến cậu ngây người đi một lúc. Cô nhẹ nhàng giới thiệu cho cậu về luật chơi như sau: Cậu có $n + 1$ lượt rút thăm, mỗi lá thăm sẽ là một con số $a_1, a_2, a_3 \dots, a_{n + 1}$ với các giá trị trong khoảng $0 \le a_i < n$ hoặc $a_i = n^2$. Người chơi sẽ trúng thưởng nếu bốc trúng lá thăm được đánh số $n^2$. Với mỗi lá thăm trúng thưởng cậu sẽ được một món quà từ cô. Do đó mà cậu muốn rút càng nhiều thăm càng tốt. Song việc rút hết $n + 1$ lá thăm sẽ rất lâu nên cô cho cậu biết tổng các số trên $n + 1$ lá thăm kia sẽ bằng $s$, nghĩa là biết $s = \sum\limits_{i = 1}^{n + 1}a_i$. Cậu suy nghĩ với gợi ý như thế thì làm sao biết được có nhiều nhất bao nhiêu lá thăm trúng thưởng?

***Yêu cầu:*** Biết giá trị $n$ và $s$, hãy tính và đưa ra số thăm trúng thưởng nhiều nhất có thể.

## Input

- Dòng đầu tiên là số nguyên dương $q$ - số truy vấn cần trả lời.
- $q$ dòng tiếp theo, mỗi dòng gồm hai số nguyên $n$ và $s$.

## Constraints

- $1 \le q \le 2 \cdot 10^4$.
- $1 \le n \le 10^6$.
- $0 \le s \le 10^{18}$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): có
    - $1 \le q \le 20$.
    - $1 \le n \le 100$.
    - $0 \le s \le 10000$.
- Subtask $2$ ($75\%$ số điểm): không có ràng buộc gì thêm.

## Output

- Gồm $q$ dòng, mỗi dòng là một số nguyên cho biết số thăm trúng thưởng nhiều nhất mà Tuân có thể rút.

## Sample Input

```
4
7 0
1 1
2 12
3 12
```

## Sample Output

```
0
1
3
1
```