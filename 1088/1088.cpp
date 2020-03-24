# include <iostream>
# include <string>
# include <sstream>

using namespace std;

// PE
int main(){
    string s, word, res;
    int line = -1;

    while(cin >> s){
        istringstream is(s);    
        while(is >> word){
            if(word == "<br>"){
                res += "\n";
                line = -1;
            }else if(word == "<hr>"){
                if(line != -1){
                    res += "\n";
                }
                string splite(80, '-');
                res += splite;
                res += "\n";
                line = -1;
            }else{
                if(line + 1 + word.size() <= 80){
                    if(line != -1){
                        res += " ";
                    }
                    res += word;

                    line += (1 + word.size());
                }else{
                    res += "\n";
                    res += word;

                    line = -1;
                }
            }
        }
    }
    

    cout << res;

    return 0;
}