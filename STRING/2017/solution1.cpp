# include <iostream>
# include <string>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    getchar();
    while(n --){
        int cnt = 0;
        getline(cin, s);
       
        for(int i = 0; i < s.length(); i ++)
            if(s[i] <= '9' && s[i] >= '0')
                cnt ++;

        cout << cnt << "\n";
    }
    return 0;
}