# include <iostream>

using namespace std;

const int maxn = 30;
long long dp[maxn] = {0, 0, 1};  // 全部找错个数

__int64 C(int n,int m)
{
    if(m<n-m) m=n-m;
    __int64 ans=1;
    for(int i = m+1;i<=n;i++) ans*=i;
    for(int i=1 ;i<=n-m;i++ ) ans /=i;
    return ans;
}

int main(){
    int c, m, n;
    cin >> c;

    for(int i = 3; i <= 20; i ++)
        dp[i] = (i-1) * (dp[i-1] + dp[i-2]);

    while(c --){
        cin >> n >> m;         // m_新郎找错 n-新婚夫妻
        // long ans = 1;
        // for(int i = n; i > m; i --){
        //     ans *= i;
        // }
        // for(int i = 1; i <= n-m; i ++){
        //     ans /= i;
        // }
        __int64 sum = C(n,m);

        cout << sum * dp[m] << "\n";
    }

    return 0;
}

// #include<stdio.h>
// __int64 C(int n,int m)
// {
//     if(m<n-m) m=n-m;
//     __int64 ans=1;
//     for(int i = m+1;i<=n;i++) ans*=i;
//     for(int i=1 ;i<=n-m;i++ ) ans /=i;
//     return ans;
// }
// int main(){
//     int n,m,N;
//     __int64  f[21];
//     f[1]=0;
//     f[2]=1;
//     for(int i=3;i<21;i++)
//     {
//         f[i]=(i-1)*(f[i-1]+f[i-2]);
//     }
//     scanf("%d",&N);
//     while(N--)
//     {
//         scanf("%d%d",&n,&m);

//        __int64 sum = C(n,m);
//      //   printf("sum=%d\n",sum);
//         printf("%I64d\n",f[m]*sum);
//     }
//     return 0;
// }