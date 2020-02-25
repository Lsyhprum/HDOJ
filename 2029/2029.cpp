# include <iostream>
# include <stack>

using namespace std;

int main(){
    int n;
    stack<char> container;

    cin >> n;
    getchar();

    while(n --){
        char s[1024];
        char c;
        int num = 0;
        while((c = getchar()) != '\n'){
            s[num ++] = c;
            container.push(c);
        }
        bool flag = true;
        for(int i = 0; i < num; i ++){
            char c = container.top();
            if(c != s[i]){
                flag = false;
                break;
            }
            container.pop();
        }
        if(flag)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}