# include <iostream>

using namespace std;

int recursion(int step){
    if(step == 0 || step == 1) return 1;
    return recursion(step-1) + recursion(step-2);
}

int main(){
    int n, a, b;
    while(cin >> n){
        while(n --){
            cin >> a >> b;
            cout << recursion(b-a) << "\n";
        }
    }
    return 0;
}