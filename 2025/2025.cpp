# include <iostream>
# include <cstring>
# include <string>

using namespace std;

int main(){
    string s;

    while(cin >> s){
        char MAX = 'A';
        for(int i = 0; i < s.length(); i ++){
            char c = s[i];
            if(c > MAX)
                MAX = c;
        }
        for(int i = 0; i < s.length(); i ++){
            char c= s[i];
            cout << c;
            if(c == MAX)
               cout << "(max)";     
        }
        cout << endl;
    }
    return 0;
}