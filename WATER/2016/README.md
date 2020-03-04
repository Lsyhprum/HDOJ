# 2016. 数据的交换输出

http://acm.hdu.edu.cn/showproblem.php?pid=2016

**Note**:

WA: 异或交换错误

```cpp
A[0] = A[0] ^ A[min_pos];
A[min_pos] = A[0] ^ A[min_pos];
A[0] = A[0] ^ A[min_pos];
```
该写法是未定义行为，c语言标准未做规定行为，不同编译器自行处理，什么都可能发生。
