# include <iostream>
# include <cstring>

using namespace std;

int main(){
    int n;
    while(cin >> n, n != -1){
        long long A = 0;
        long long B = 0;
        for(int i = 0; i <= n; i ++){
            if(i == 0)
                A = 1;
            else{
                long long tmpA = A * 2 + B * 2;
                long long tmpB = A;
                A += tmpA;
                B += tmpB;
            }
        }

        printf("%lld, %lld\n", A, B);
    }
    return 0;
}

// #include "stdio.h"
// long long a[35];
// long long b[35];
// int main(){
//     int i,c;
//     a[0]=1;
//     b[0]=0;
//     for(i=1;i<35;i++){
//         a[i]=3*a[i-1]+2*b[i-1];
//         b[i]=b[i-1]+a[i-1];
//     }
//     while(~scanf("%d",&c)){
//         if(c==-1) return 0;
//         printf("%lld, %lld\n",a[c],b[c]);
//     }
//     return 0;
// } 