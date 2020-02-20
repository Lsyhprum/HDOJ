# include <iostream>

using namespace std;

int gcb(int a, int b){
    if(b == 0) return a;
    else return gcb(b, a % b);
}

int main(){
    int N, M;
    while(cin >> N >> M, N != -1 || M != -1){
        if(gcb(N, M) == 1)
            cout << "YES" << endl;
        else
            cout << "POOR Haha" << endl;
    }

    return 0;
}