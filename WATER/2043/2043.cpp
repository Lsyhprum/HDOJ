#include <stdio.h>
#include <string.h>
 
int main(void)
{
    int m, count, f1, f2, f3, f4, len, i;
    char s[256], t4[]="~!@#$%^", *p;
 
    scanf("%d", &m);
    while(m--) {
        // 读入字符串
        scanf("%s", s);
 
        // 密码检查
        count = 0;
        f1 = f2 = f3 = f4 = 0;
        len = strlen(s);
        if(8 <= len && len <= 16) {             // 密码长度检查
            for(i=0; i<len; i++) {
                if('A' <= s[i] && s[i] <= 'Z')  // 第一类字符
                    f1 = 1;
                if('a' <= s[i] && s[i] <= 'z')  // 第二类字符
                    f2 = 1;
                if('0' <= s[i] && s[i] <= '9')  // 第三类字符
                    f3 = 1;
                p = t4;                         // 第四类字符
                while(*p) {
                    if(s[i] == *p) {
                        f4 = 1;
                        break;
                    }
                    p++;
                }
 
                count = f1 + f2 + f3 + f4;
                if(count >= 3)
                    break;
            }
        }
 
        // 结果输出
        if(count >= 3)
            printf("YES\n");
        else
            printf("NO\n");
    }
 
    return 0;
}