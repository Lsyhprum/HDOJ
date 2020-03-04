# include <iostream>

using namespace std;

// 2 4 6 8 10 12 14
// 1 2 3 4 5 6 7
int main(){
    int n, m;

    while(cin >> n >> m){
        int round = n / m;
        int left = n % m;

        for(int i = 0; i < round; i ++){
            if(i != 0)
                cout << " ";
            cout << i * m * 2 + 1 + m;  
        }
        if(left){
            if(round != 0)
                cout << " ";
            cout << round * m * 2 + 1 + left;
        }
        cout << endl;
    }

    return 0;
}