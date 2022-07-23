# Đặt lại tên biến

Thùy thích lập trình thi đấu, song mỗi lần thi thì cô lại bị hack và cô hong thích điều đó. Cho nên cô nảy ra ý tưởng sửa lại tên biến như sau: với biến đầu tiên xuất hiện và các biến có cùng tên, cô sẽ thay biến đó bằng chữ `a`. Sang đến biến tiếp theo cô sẽ thay những biến có cùng tên đó bằng biến `b` và tiếp tục như thế cho đến hết. Vì bản chữ cái có $26$ chữ cái khác nhau nên cô luôn có tối đa $26$ tên biến khác nhau.

***Yêu cầu:*** Cho một chuỗi liên tiếp các biến đã được đổi tên viết liền nhau. Kiểm tra xem thử chuỗi này có phải là một chuỗi tên biến đã được đỏi tên đúng hay không.

## Input

- Một dòng duy nhất là chuỗi $s$.

## Constraints

- Độ dài chuỗi $|s|$ không quá $500$ kí tự.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): có độ dài chuỗi $|s|$ không quá $10$ kí tự.
- Subtask $2$ ($75\%$ số điểm): không có ràng buộc gì thêm.

## Output

- In `YES` nếu chuỗi là một chuỗi các tên biến được chuyển đổi đúng theo quy tắc trên. Ngược lại in `NO`.

## Sample Input 1

```
abacaba
```

## Sample Output 1

```
YES
```

## Sample Input 2

```
jinotega
```

## Sample Output 2

```
NO
```