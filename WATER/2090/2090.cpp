# include <iostream>
# include <string>

using namespace std;

int main(){
    string name;
    double num, val, sum = 0;
    while(cin >> name >> num >> val){
        sum += num * val;
    }
    printf("%.1f\n", sum);    
    return 0;
}