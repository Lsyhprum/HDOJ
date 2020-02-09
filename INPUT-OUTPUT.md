# INPUT-OUTPUT

[1089. A+B for Input-Output Practice (I)](https://github.com/Lsyhprum/HDUOJ/blob/master/1089/1089.cpp)

[1090. A+B for Input-Output Practice (II)](https://github.com/Lsyhprum/HDUOJ/blob/master/1090/1090.cpp)

[1091. A+B for Input-Output Practice (Ⅲ)](https://github.com/Lsyhprum/HDUOJ/blob/master/1091/1091.cpp)

[1092. A+B for Input-Output Practice (Ⅳ)](https://github.com/Lsyhprum/HDUOJ/blob/master/1092/1092.cpp)

[1093. A+B for Input-Output Practice (Ⅴ)](https://github.com/Lsyhprum/HDUOJ/blob/master/1093/1093.cpp)

[1094. A+B for Input-Output Practice (Ⅵ)](https://github.com/Lsyhprum/HDUOJ/blob/master/1094/1094.cpp)

[1095. A+B for Input-Output Practice (Ⅶ)](https://github.com/Lsyhprum/HDUOJ/blob/master/1095/1095.cpp)

[1096. A+B for Input-Output Practice (Ⅷ)](https://github.com/Lsyhprum/HDUOJ/blob/master/1096/1096.cpp)

**Note：**

1. 输入

OJ 采用黑盒测试进行检验，测试数据放在文件中，若未给定输入结束条件，默认读取到文件末尾。

&ensp;&ensp;&ensp;&ensp;1.1 无输入结束条件（Pro.ID 1089）


```C
// scanf 的返回值，其返回值为成功读入的参数个数，读取文件时到达文件末尾时返回 -1 即 EOF
while(scanf("%d", &n) != EOF){
	...
}

// cin 本身是一个对象，无返回值。以下操作返回值来自 >> 操作重载函数，大多数其返回值为 cin (非 0 值)，只有遇到 EOF 时，返回值为 0
while (cin >> a) {
	...
}
```
&ensp;&ensp;&ensp;&ensp;1.2 有输入数据组数（Pro.ID 1090、Pro.ID 1093、Pro.ID 1094）
```
cin >> len;
while (len --) {
	cin >> a;
	...
}
```
&ensp;&ensp;&ensp;&ensp;1.3 有输入结束条件（Pro.ID 1091、Pro.ID 1092）
```
// 使用逗号表达式
while (cin >> a >> b, a || b) {
	...
}
```
2. 输出

输出格式是易错项，格式错误将导致 **Presentation Error**

&ensp;&ensp;&ensp;&ensp;2.1 正常输出

&ensp;&ensp;&ensp;&ensp;2.2 每组数据输出后加额外空行（HDU1095）

&ensp;&ensp;&ensp;&ensp;2.3 两组输出数据间加额外空行（HDU1096）

&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;通过检查 len 是否已经减小到 0 ，判断是否应当输出额外换行
