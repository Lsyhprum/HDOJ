# include <iostream>
# include <cctype>
# include <string>

using namespace std;

int main(){
    string s;

    while(getline(cin, s)){
        for(int i = 0; i < s.size(); i ++){
            if(i == 0 || s[i-1] == ' ')
                printf("%c", toupper(s[i]));
            else
                printf("%c", s[i]);
        }
        cout << "\n";
    }
    return 0;
}