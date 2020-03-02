# include <iostream>
# include <sstream>
# include <cstring>

using namespace std;

int main(){
    string s;
    while(getline(cin, s)){                     // cin 空格结束 getline \n
        istringstream is(s);
        string tmp = "";
        string num;
        while(is >> num){
            if(tmp.empty()){
                tmp = num;
            }else{
                if(tmp == num){
                    cout << "YES" << endl;
                }else{
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}