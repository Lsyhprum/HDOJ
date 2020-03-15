#include "stdio.h"
int main(){
    int n,hi,i,sum,k,sum1,ncase=0;
    int a[110];
    while(~scanf("%d",&n) && n){
        if(ncase++) {puts("");
        }
        sum=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        k=sum/n;
        sum1=0;
        for(i=0;i<n;i++){
            if(k<a[i]){
                sum1+=a[i]-k;
            }
        }
        printf("%d\n",sum1);
    }
}