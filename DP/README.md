# 动态规划

[2018. 母牛的故事](https://github.com/Lsyhprum/HDUOJ/tree/master/DP/2018)

[2041. 超级楼梯](https://github.com/Lsyhprum/HDUOJ/tree/master/WATER/2041)

[2044. 一只小蜜蜂...](https://github.com/Lsyhprum/HDUOJ/tree/master/DP/2044)

[2045. 不容易系列之(3)—— LELE的RPG难题](https://github.com/Lsyhprum/HDUOJ/tree/master/DP/2045)

[2046. 骨牌铺方格](https://github.com/Lsyhprum/HDUOJ/tree/master/DP/2046)

[2047. 阿牛的EOF牛肉串](https://github.com/Lsyhprum/HDUOJ/tree/master/DP/2047)

[2048. 神、上帝以及老天爷](https://github.com/Lsyhprum/HDUOJ/tree/master/DP/2048)

[2049. 不容易系列之(4)——考新郎](https://github.com/Lsyhprum/HDUOJ/tree/master/DP/2049)


动态规划思路：

1. 考虑递归写法（从最后一项向前考虑，从最后一项不同情况考虑状态转移方程）
2. 递推+记忆化

动态规划格式：

```cpp
const int maxn = 1010;     // 比最大 + 10
long long dp[maxn];        // 类型 long long 防止数据过大

// 输入数据前打表
// 状态转移方程

// 输出dp[i]
```