# Chuyến tàu

Sáng nay Tuân có chuyến tàu Từ Đà Lạt về lại Sài Gòn nên cậu đã dậy thật sớm để chuẩn bị. Nhìn quanh phong cảnh lần cuối cậu tranh thủ ra đến ga tàu. Hôm nay người đi tàu rất nhiều...

Chuyến tàu của cậu đi hiện nay có $n$ toa, toa thứ $i$ đang có $a_i$ người. Nhà ga có quy định rằng toa tàu thứ $i$ trong đoàn tàu sẽ chứa tối đa $i$ người, nghĩa là $a_i \le i$ với $a_i$ là số người trong toa tàu thứ $i$. Nhà ga có thể thêm vài toa tàu (hoặc không thêm) vào đoàn tàu để thỏa mãn quy định trên. Giả sử hiện tại đoàn tàu đang có $4$ toa với số hành khách trên đó lần lượt từ toa tàu thứ nhất đến toa tàu thứ tư là: $[1, 3, 4, 5]$. Khi đó, nhà ga cần thêm một toa tàu chở $2$ người vào vị trí thứ hai của đoàn tàu: $[1, 2, 3, 4, 5]$ hoặc thêm một toa chở $1$ người vào vị trí thứ hai của đoàn tàu: $[1, 1, 3, 4, 5]$. Nhà ga có thể thêm toa tàu vào bất cứ vị trí nào của đoàn tàu.

Tuân tự hỏi để duy trì quy định của nhà ga, thì phải cần thêm tối thiểu bao nhiêu toa tàu.

***Yêu cầu:*** Biết số toa tàu và số người ở trên từng toa ban đầu, tính số toa tàu ít nhất cần thêm để đoàn tàu phù hợp với quy định của nhà ga.

## Input

- Dòng đầu tiên là số nguyên dương $q$ - số truy vấn cần trả lời. Mỗi truy vấn có dạng như sau:
    - Dòng đầu tiên là số nguyên dương $n$ - số toa tàu ban đầu.
    - Dòng thứ hai gồm $n$ số $a_1, a_2, a_3, \dots, a_n$ là số người ngồi trên toa tàu thứ $i$.

## Constraints

- $1 \le q \le 200$.
- $1 \le n \le 100$.
- $1 \le a_i \le 10^9$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): có
    - $1 \le q \le 10$.
    - $1 \le n \le 20$.
    - $1 \le a_i \le 100$.
- Subtask $2$ ($75\%$ số điểm): không có ràng buộc gì thêm.

## Output

- Gồm $q$ dòng, dòng thứ $i$ là đáp án cho truy vấn thứ $i$.

## Sample Input

```
4
3
1 3 4
5
1 2 5 7 4
1
1
3
69 6969 696969
```

## Sample Output

```
1
3
0
696966
```

## Explanation

Ở truy vấn thứ hai, nhà ga sẽ thêm hai toa tàu chở $3$ và $4$ người vào vị trí thứ ba và bốn, khi đó ta có: $[1, 2, 3, 4, 5, 7, 4]$. Sau đó nhà ga sẽ thêm toa tàu chở $6$ người vào vị trí thứ $6^, khi đó: $[1, 2, 3, 4, 5, 6, 7, 4]$. Lúc này đoàn tàu đã thỏa quy định của nhà ga và đủ điều kiện khởi hành.
