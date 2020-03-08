# include <iostream>
# include <sstream>

using namespace std;

int main(){
    int n, m;
    string s;
    while(cin >> n >> m, n || m){
        int cnt = 0;
        for(int i = n; i <= m; i ++){
            stringstream ss;
            ss << i;
            ss >> s;

            bool flag = true;
            for(int j = 0; j < s.length(); j ++){
                if(s[j] == '4' || s[j] == '6' && j+1 < s.length() && s[j+1] == '2'){
                    flag = false;
                    continue;
                }
            }
            if(flag) cnt ++;
        }
        cout << cnt << "\n";
    }
    return 0;
}