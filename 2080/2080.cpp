#include "stdio.h"
#include "math.h"
int main(){
    double x1,x2,y1,y2,k;
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
        k=(x1*x2+y1*y2)/sqrt(x1*x1+y1*y1)/sqrt(x2*x2+y2*y2);
        printf("%.2lf\n",180*acos(k)/3.1415926);
    }
    return 0;
}