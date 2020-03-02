# include <iostream>
# include <cstring>
# include <string>

using namespace std;

int main(){
    int n, m;
    while(cin >> n >> m, n || m){
        int cnt = 0;
        for(int i = n; i <= m; i ++){
            string s = to_string(i);            // 不熟 cpp11 支持to_string()
            bool flag = true;
            for(string::iterator it = s.begin(); it != s.end(); it ++){
                if(*it == '4' || (*it == '6' && *(it+1) == '2' && it+1 != s.end())){
                    flag = false;
                } 
            }
            if(flag) cnt ++;
        }
        cout << cnt << endl;
    }
    return 0;
}