# include <iostream>
# include <math.h>

using namespace std;

bool is_prime(int num){
    for(int i = 2; i <= (int)sqrt(1.0 * num); i ++){
        if(num % i == 0)
            return false;
    }
    return true;
}

int main(){
    int a, b;
    bool flag;
    while(cin >> a >> b, a !=0 || b != 0){
        flag = true;
        for(int n = a; n <= b; n ++){
            int value = n * n + n + 41;
            if(!is_prime(value)){
                cout << "Sorry" << endl;  
                flag = false;
                break;
            }
        }
        if(flag)
            cout << "OK" << endl;
    }
        
    return 0;
}