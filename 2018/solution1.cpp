# include <iostream>

using namespace std;

// 递归

int cow(int i){
    if(i <= 4) return i;
    return cow(i-1) + cow(i-3);    // 前一年个数 + 三年前个数（新牛开始生孩子）
}

int main(){
    int n;
    while(cin >> n, n){
       cout << cow(n) << "\n";
    }
    return 0;
}