# include <iostream>

using namespace std;

const int maxn = 32;
int table[maxn][maxn] = {};

int main(){
    table[1][1] = 1; 
    int n;
    while(cin >> n){
        for(int i = 1 ;i <= n ;i ++){   // 第 i 层
            for(int j = 1; j <= i; j ++){
                if(table[i][j] == 0){
                    table[i][j] = table[i - 1][j - 1] + table[i - 1][j];
                }
                if(j != 1)
                    cout << " ";
                cout << table[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}

/*
1
2 3
4 5 6
7 8 9 10

*/