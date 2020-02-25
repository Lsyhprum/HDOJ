# include <iostream>
# include <string>
# include <cstring>

using namespace std;
char label[5] = {'a', 'e', 'i', 'o', 'u'};
int table[5];

int main(){
    int n;
    cin >> n;
    getchar();
    string s;
    while(n --){
        memset(table, 0, sizeof(table));

        getline(cin, s);
        for(int i = 0; i < s.length(); i ++){
            for(int j = 0; j < 5; j ++){
                if(s[i] == label[j] || s[i] == label[j] + 32){
                    table[j] += 1;
                }
            }
        }
        for(int j = 0; j < 5; j ++){
            if(j == 4){
                cout << label[j] << ":" << table[j];
            }else{
                cout << label[j] << ":" << table[j] << endl;
            }
        }
        cout << endl;
        if(n != 0){
            cout << endl;
        }
    }
    
    return 0;
}