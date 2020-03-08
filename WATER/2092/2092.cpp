#include "stdio.h"
int abs(int a);
int main(){
    int i,a,b,s,flag,flag1;
    while(~scanf("%d%d",&a,&b) && (a || b)){       
        flag=0;
        for(i=-abs(b);i<=abs(b);i++){
            if((a-i)*i==b){
                flag=1;
                break;
            }
        }
        if(flag==1) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
int    abs(int a){
    if(a<0) a=-a;
    return a;
}