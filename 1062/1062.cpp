# include <iostream>
# include <stack>
# include <string>

using namespace std;

int main(){
    int T;
    cin >> T;
    getchar();

    stack<char> container;
    while(T --){
        string s;
        getline(cin, s);
        const char *c = s.data(); // string yu char 转化

        while(*c){
            if(*c == ' '){
                while(!container.empty()){
                    cout << container.top();
                    container.pop();
                }
                cout << " ";
            }else{
                container.push(*c);
            }
             c ++;
        }
        while(!container.empty()){
            cout << container.top();
            container.pop();
        }
        //if(T >= 1)
        cout << endl;
    }
    return 0;
}