# include <iostream>
# include <string>
# include <cstring>

using namespace std;

char to_upper(char c){
    if(c >= 'a' && c <= 'z')
        return c + 'A' - 'a';
    else return c;
}

int main(){
    string s;

    while(getline(cin, s)){
        for(int i = 0; i < s.length(); i ++){
            if(i == 0){
                cout << to_upper(s[i]);
                continue;
            }
                
            if(s[i] == ' '){
                cout << " " << to_upper(s[i + 1]);
                i += 1;
            }else{
                cout << s[i];
            }
        }
        cout << endl;
    }
    
    return 0;
}