cin cin.get()  cin.getline() gets()

>> 会过滤掉不可见字符（空格 回车 TAB)

cin >> 接收一个字符串，遇到 空格 tab 回车 结束

cin.get(字符数组名，接收字符数目) 可以接收一行字符串，可以接收空格

cin.getline(接收字符数组，接收个数,结束字符) 接收字符串，可以接收空格并输出

eg:jklijkl
cin.getline(m, t)
jklj 最后一个是 '\0'(字符数组结束标志)

cin.getline() 属于istream, 接收为字符数组

getline 属于 string 需要 string 头文件