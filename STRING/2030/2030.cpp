#include <stdio.h>
 
int main(void)
{
    int n;
 
    scanf("%d", &n);
    getchar();
    while(n--) {
        int cnt = 0;
        char ch;
 
        for(;;) {
           if((ch = getchar()) == '\n')
               break;
 
           if(ch < 0)
               cnt++;
        }
 
        printf("%d\n", cnt / 2);
    }
 
    return 0;
}