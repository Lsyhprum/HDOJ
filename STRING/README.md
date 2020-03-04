# String

## 输入

[2026. 首字母变大写](https://github.com/Lsyhprum/HDUOJ/tree/master/STRING/2026)

C++ 输入过程是把输入加载到缓冲区中，之后对缓冲区中内容进行读取。不同的输入函数对缓冲区内的处理方法不同，主要表现在对空格、回车等字符的不同处理。

#### cin

接收一个字符串，遇到**空格、tab、回车**结束并舍弃这些不可见字符，有连续不可见字符会全部舍弃，不会删除缓存区中的不可见字符

#### c = cin.get() / cin.get(c)

接收一个字符，不会舍弃不可见字符

#### cin.get(array, size)

接收长度为 size 的字符数组

####  cin.get(array, size, s)

数据输入到字符数组，当达到长度 size 或遇到字符 s 时结束，且 s 会被舍弃

#### cin.getline(array, size) / cin.getline(array, size, s)

in.getline()的用法和 cin.get() 用法大致相同。但 cin.get() 当遇到回车时会结束目前输入，且不会删除缓冲区中的回车。cin.getline() 当遇到回车时会结束当前输入，且会删除缓冲区中的回车

#### getline(cin, s) 

与 cin.getline() 不同的是，其接收的是 string 类型

#### gets()

## 常见错误

#### 头文件引用错误（CE)

[2017. 字符串统计](https://github.com/Lsyhprum/HDUOJ/tree/master/STRING/2017)

<string> 是 C++标准库头文件，用于字符串操作。<cstring> 与 <string.h> 对应，包含字符数组相关函数


#### 输入错误（WA)

[2027. 统计元音](https://github.com/Lsyhprum/HDUOJ/tree/master/STRING/2027)

由于前一个输入函数不会清除终止字符，导致下一个输入函数错误

## 汉字相关

[2030. 汉字统计](https://github.com/Lsyhprum/HDUOJ/tree/master/STRING/2030)

汉字机内码使用二个字节，汉字的每个字节都是 <0 的














[1062. Text Reverse](https://github.com/Lsyhprum/HDUOJ/tree/master/1062)

[2072. 单词数](https://github.com/Lsyhprum/HDUOJ/tree/master/2072)

[2629. Identity Card](https://github.com/Lsyhprum/HDUOJ/tree/master/2629)

[2081. 手机短号](https://github.com/Lsyhprum/HDUOJ/tree/master/2081)

**Note：**

1. string 与 char* 相互转化（Pro.ID 1062）

2. 字符串切割（Pro.ID 2072)

3. 字符串截取（Pro.ID 2629)

4. string 相关头文件（Pro.ID 2629)


