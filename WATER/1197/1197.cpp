# include <iostream>
# include <iomanip>

using namespace std;

int fun(int i, int base){
    int result = 0;               // 不清零 则叠加
    while(i){
        result += i % base;
        i /= base;
    }
    return result;
}

int main(){
    for(int i = 2992; i < 10000; i ++){
        int dec = fun(i, 10);
        int duo = fun(i, 12);
        int hex = fun(i, 16);
        if(dec == duo && dec == hex)
            cout << i << endl;
    }
    return 0;
}