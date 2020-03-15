#include<stdio.h>
 
int main()
{
    int n,i,k;
    float a[3005],c[3005];
    float sum;
    while(~scanf("%d",&n))
    {
        scanf("%f%f",&a[0],&a[n+1]);
        for(i=1;i<=n;++i)
            scanf("%f",&c[i]);
        k=2;
        sum=0;
        for(i=n;i>0;--i)
        {
            c[i]*=k;
            k+=2;
            sum+=c[i];
        }
        printf("%.2f\n",1.0/(n+1)*(a[n+1]+n*a[0]-sum));
    }
    return 0;
}