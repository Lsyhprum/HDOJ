# 2000. ASCII码排序

http://acm.hdu.edu.cn/showproblem.php?pid=2000

**Note**:

本题值得注意的两点:

* 两数交换的方法(solution1.cpp)

    * 借助其他变量交换，**简单但最有效**
    * 异或运算，无需额外变量，计算速度并不会提升且易导致未定义行为([2016. 数据的交换输出](https://github.com/Lsyhprum/HDUOJ/tree/master/2016))，**不提倡使用**
    * 加减交换，无需额外变量，**容易溢出**

* STL sort

使用 C++ STL 的 sort(first, last)，注意 STL 中容器及算法均为**左闭右开**区间，即范围为 [__first,__last)