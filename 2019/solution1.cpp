# include <iostream>
# include <algorithm>

using namespace std;

const int maxn = 110;
int A[maxn];

int main(){
    int n, x;

    while(cin >> n >> x, n || x){
        for(int i = 0; i < n; i ++)
            cin >> A[i];
       
        int pos = upper_bound(A, A + n, x) - A;
        for(int i = 0; i < pos; i ++){
            cout << A[i] << " ";
        }
        cout << x;
        for(int i = pos; i < n; i ++){
            cout << " " << A[i];
        }
        cout << "\n";
    }
    return 0;
}