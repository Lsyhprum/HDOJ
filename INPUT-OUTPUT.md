# INPUT-OUTPUT

## 输入

#### 无限制

OJ 采用黑盒测试进行检验，测试数据放在文件中，若未给定输入结束条件，默认读取到文件末尾。

[1089. A+B for Input-Output Practice (I)](https://github.com/Lsyhprum/HDUOJ/blob/master/1089/1089.cpp)

```cpp
// scanf 的返回值，其返回值为成功读入的参数个数，读取文件时到达文件末尾时返回 -1 即 EOF
while(scanf("%d", &n) != EOF){
	...
}

// cin 本身是一个对象，无返回值。以下操作返回值来自 >> 操作重载函数，大多数其返回值为 cin (非 0 值)，只有遇到 EOF 时，返回值为 0
while (cin >> a) {
	...
}
```

#### 数据组数限制

[1090. A+B for Input-Output Practice (II)](https://github.com/Lsyhprum/HDUOJ/blob/master/1090/1090.cpp)

[1093. A+B for Input-Output Practice (Ⅴ)](https://github.com/Lsyhprum/HDUOJ/blob/master/1093/1093.cpp)

[1094. A+B for Input-Output Practice (Ⅵ)](https://github.com/Lsyhprum/HDUOJ/blob/master/1094/1094.cpp)

```cpp
cin >> len;
while (len --) {
	cin >> a;
	...
}
```

#### 特定条件限制

[1091. A+B for Input-Output Practice (Ⅲ)](https://github.com/Lsyhprum/HDUOJ/blob/master/1091/1091.cpp)

[1092. A+B for Input-Output Practice (Ⅳ)](https://github.com/Lsyhprum/HDUOJ/blob/master/1092/1092.cpp)


```cpp
// 使用逗号表达式
while (cin >> a >> b, a || b) {
	...
}
```

## 输出

输出格式是易错项，格式错误将导致 **Presentation Error** 乃至 **Time Limit Exceeded**

#### 输出后加空行

[1095. A+B for Input-Output Practice (Ⅶ)](https://github.com/Lsyhprum/HDUOJ/blob/master/1095/1095.cpp)


#### 输出间加空行

通过检查 len 是否已经减小到 0 ，判断是否应当输出额外换行

[1096. A+B for Input-Output Practice (Ⅷ)](https://github.com/Lsyhprum/HDUOJ/blob/master/1096/1096.cpp)


#### 输出格式

[2001. 计算两点间的距离](https://github.com/Lsyhprum/HDUOJ/tree/master/2001)


#### endl 和 \n

endl 会输出 \n，然后刷新缓冲区，速度比 \n 慢，不建议使用