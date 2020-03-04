# INPUT-OUTPUT

## 输入

#### 无限制

OJ 采用黑盒测试进行检验，测试数据放在文件中，若未给定输入结束条件，默认读取到文件末尾。

[1089. A+B for Input-Output Practice (I)](https://github.com/Lsyhprum/HDUOJ/blob/master/INPUT-OUTPUT/1089/1089.cpp)

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

[1090. A+B for Input-Output Practice (II)](https://github.com/Lsyhprum/HDUOJ/blob/master/INPUT-OUTPUT/1090/1090.cpp)

[1093. A+B for Input-Output Practice (Ⅴ)](https://github.com/Lsyhprum/HDUOJ/blob/master/INPUT-OUTPUT/1093/1093.cpp)

[1094. A+B for Input-Output Practice (Ⅵ)](https://github.com/Lsyhprum/HDUOJ/blob/master/INPUT-OUTPUT/1094/1094.cpp)

```cpp
cin >> len;
while (len --) {
	cin >> a;
	...
}
```

#### 特定条件限制

[1091. A+B for Input-Output Practice (Ⅲ)](https://github.com/Lsyhprum/HDUOJ/blob/master/INPUT-OUTPUT/1091/1091.cpp)

[1092. A+B for Input-Output Practice (Ⅳ)](https://github.com/Lsyhprum/HDUOJ/blob/master/INPUT-OUTPUT/1092/1092.cpp)


```cpp
// 使用逗号表达式
while (cin >> a >> b, a || b) {
	...
}
```

## 输出

输出格式是易错项，格式错误将导致 **Presentation Error** 乃至 **Time Limit Exceeded**

#### endl 和 \n

endl 会输出 \n，然后刷新缓冲区，速度比 \n 慢，不建议使用

#### 输出后加空行

[1095. A+B for Input-Output Practice (Ⅶ)](https://github.com/Lsyhprum/HDUOJ/blob/master/INPUT-OUTPUT/1095/1095.cpp)


#### 输出间加空行

通过检查 len 是否已经减小到 0 ，判断是否应当输出额外换行

[1096. A+B for Input-Output Practice (Ⅷ)](https://github.com/Lsyhprum/HDUOJ/blob/master/INPUT-OUTPUT/1096/1096.cpp)


#### 输出格式

c++ 中 cout 使用流操作算子或成员函数对输出格式进行控制，其均在头文件 iomanip 中定义

<style>
table th:first-of-type {
    width: 20%;
}
table th:nth-of-type(2) {
    width: 20%;
}
table th:nth-of-type(3) {
    width: 60%;
}
</style>

| cout      | printf |     作用 |
| :----: | :---:|  :-----: |
| dec(默认)    | %d |   十进制整数 |
| hex| %x,%X |	十六进制整数|
| oct| %o |	八进制整数|
| fixed| |	普通小数浮点数|
| scientific|%e,%E |	科学计数法浮点数|
| left|%-d|	左对齐|
| right(默认)|%+d(默认)|	右对齐|
| setbase(b)| |	设置输出整数时的进制，b=8、10 或 16|
| setw(w)|%wd|	最小字符宽度w|
| setfill(c)||	在指定输出宽度的情况下，输出的宽度不足时用字符 c 填充（默认情况是用空格填充）|
| setprecision(n)|%g,%G,%.nf|	设置输出浮点数的精度为 n。在使用非 fixed 且非 scientific 方式输出的情况下，n 即为有效数字最多的位数，如果有效数字位数超过 n，则小数部分四舍五人，或自动变为科学计 数法输出并保留一共 n 位有效数字。在使用 fixed 方式和 scientific 方式输出的情况下，n 是小数点后面应保留的位数。|
| uppercase||	十六进制数中使用 A~E。若输出前缀，则前缀输出 0X，科学计数法中输出 E|
| *nouppercase||	十六进制数中使用 a~e。若输出前缀，则前缀输出 0x，科学计数法中输出 e|







*参考：*

[C语言的格式化输出函数printf](https://blog.csdn.net/lemonrabbit1987/article/details/47246875)