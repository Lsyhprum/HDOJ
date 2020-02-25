# include <iostream>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        int tmp = 1;
        for(int i = 1; i < n; i ++){
            tmp = (tmp + 1) * 2;
        }
        cout << tmp << endl;
    }
    return 0;
}