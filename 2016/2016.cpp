# include <iostream>

using namespace std;

const int maxn = 100;
int A[maxn];

int main(){
    int n;

    while(cin >> n, n){
        cin >> A[0];

        int min_pos = 0;
        int min = A[0];

        for(int i = 1; i < n; i ++){
            cin >> A[i];
            if(A[i] < min){
                min = A[i];
                min_pos = i;
            }
        }

        //cout << A[0] << endl;

        int tmp;
        tmp = A[0];
        A[0] = A[min_pos];
        A[min_pos] = tmp; 
        // A[0] = A[0] ^ A[min_pos];
        // A[min_pos] = A[0] ^ A[min_pos];
        // A[0] = A[0] ^ A[min_pos];

        //cout << min_pos << A[0] << endl;

        for(int i = 0; i < n; i ++){
            cout << A[i];
            if(i == n-1){
                cout << endl;
            }else{
                cout << " ";
            }
        }
    }

    return 0;
}