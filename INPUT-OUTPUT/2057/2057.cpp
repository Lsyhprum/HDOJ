# include <iostream>

using namespace std;

int main(){
    long long a, b;
    while(scanf("%llX %llX", &a, &b) != EOF){
        long long ans = a + b;
        if(ans >= 0){
            printf("%llX\n", ans);
        }else{
             printf("-%llX\n", -ans);
        }
    }
    return 0;
}