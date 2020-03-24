# include <iostream>
# include <string>

using namespace std;

int main(){
    int n;
    cin >> n;

    string s;

    for(int i = 0; i < n; i ++){
        cin >> s;
        s += "#";

        string res = "";
        int left = 0, right = 0, num = 0;

        while(right < s.size() - 1){
            while(s[left] == s[right]){
                num ++;
                right ++;
            }

            if(num != 1){
                res += to_string(num);
            }
            res += s[left];
            left = right;
            num = 0;
        }

        cout << res << endl;
    }

    return 0;
}