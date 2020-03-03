# include <iostream>
# include <string>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    while(n --){
        cin >> s;
        string::iterator it;
        int num = 0;
        for(it = s.begin(); it < s.end(); it ++){
            if(*it >= '0' && *it <= '9')
                num ++;
        }
        cout << num << endl;
    }
    return 0;
}