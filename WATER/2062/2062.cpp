#include "stdio.h"
long long c[21];
long long s[21];
int main(){
    long long m;
    int i,j,k,n,t;
    c[1]=1;
    for(i=2;i<=20;i++){
            c[i]=(i-1)*c[i-1]+1;    //c[i]代表n=i时，每组的数量,例如c[2]代表n=2时，每组有2个.. 
    }
    while(~scanf("%d%lld",&n,&m)){
        for(i=0;i<=20;i++){   //每循环一次都要把s[]数组重新归位,因为之前已经删了出现的 
            s[i]=i;
        }
        
        while(n>0&&m>0){    //当n<=0 ||m<=0时，循环就结束了 
            t=m/c[n]+(m%c[n]==0?0:1);   //t代表的是在当前排列中是第几个..首数字是多少. 
            if(t>0){     //感觉就是不断的求首数字.. 
              printf("%d",s[t]);
              for(j=t;j<=n;j++){
                  s[j]=s[j+1];   //之前在这里是s[j]+=1，是WA...这里是把输出了的给删除掉 
              }
              m-=((t-1)*c[n]+1); //重新算n-1时，是第几个.. 
              putchar(m==0?'\n':' ');
              
              }
              n--;
        }
    }
    return 0;
}