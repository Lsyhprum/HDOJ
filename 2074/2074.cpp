#include<stdio.h>
#include<string.h>
char ch[100][100];
int main()
{
    int n,chang,kuan;
    char ch1,ch2,ch3;
    int AA=0;
    while(~scanf("%d %c %c",&n,&ch1,&ch2))
    {
        if(AA)    printf("\n");
        AA=1;
        memset(ch,0,sizeof(ch));
        chang=1;
        kuan=n;
        int cnt=1;
        int mm=n/2+1;
        while(chang<=kuan)
        {
            if(mm%2==0)
            {
                 if(cnt%2!=0) ch3=ch2;
            else ch3=ch1;
            }
           else
           {
               if(cnt%2!=0) ch3=ch1;
                else ch3=ch2;
           }
            for(int i=chang;i<=kuan;i++)
                ch[chang][i]=ch3,
                ch[kuan][i]=ch3,
                ch[i][chang]=ch3,
                ch[i][kuan]=ch3;
                chang++;
                kuan--;
                cnt++;
        }
        ch[1][1]=' ';
        ch[1][n]=' ';
        ch[n][1]=' ';
        ch[n][n]=' ';
        if(n==1) printf("%c\n",ch1);
        else
        {
            for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                printf("%c",ch[i][j]);
            printf("\n");
        }
        }
 
    }
    return 0;
}