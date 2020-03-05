# include <iostream>

using namespace std;

const int maxn = 100010;
int A[maxn] = {0};

int main(){
    int n;

    for(int i = 1; i <= 100000; i ++){
        for(int j = i; j <= 100000; j += i){
            A[j] = A[j] ? 0 : 1;
        }
    }

    while(cin >> n){
        cout << A[n] << "\n";
    }
    return 0;
}