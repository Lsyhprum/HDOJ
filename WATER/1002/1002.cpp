# include <iostream>
# include <string>
# include <cstring>

using namespace std;

int main(){
    int T, i, j, a, b, tmp, n;
    string s1, s2, s3[1010];

    cin >> T;
    for(int k = 1; k <= T; k ++){
        cin >> s1 >> s2;

        i = s1.size() - 1, j = s2.size() - 1, tmp = 0, n = 0;
        while(i >= 0 || j >= 0){
            if(i >= 0){
                a = s1[i --] - '0';
            }else{
                a = 0;
            }
            
            if(j >= 0){
                b = s2[j --] - '0';
            }else{
                b = 0;
            }

            s3[n ++] = '0' + (a + b + tmp) % 10;
            tmp = (a + b + tmp) / 10;
        }
        while(tmp){
            s3[n ++] = '0' + tmp % 10;
            tmp /= 10;
        }

        cout << "Case " << k << ":" << endl;
        cout << s1 << " + " << s2 << " = ";

        for(int i = n-1; i >= 0; i --){
            cout << s3[i];
        }
        cout << endl;

        if(k < T){
            cout << endl;
        }

    }
    return 0;
}