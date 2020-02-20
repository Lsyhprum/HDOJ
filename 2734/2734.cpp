# include <iostream>
# include <string>

using namespace std;

int main(){
    string s;
    while(getline(cin, s), s != "#"){
        const char *c = s.data();
        int i = 1;
        int sum = 0;
        while(*c){
            if(*c != ' ')
                sum += (i * (*c - 'A' + 1));
    
            c ++;
            i ++;  
        }
        cout << sum << endl;
    }
    return 0;
}