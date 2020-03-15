# include <iostream>
# include <string>
# include <cstring>

using namespace std;

const int maxn = 1010;

char text[maxn];
char pattern[maxn];
int inext[maxn];

void getNext(){
    memset(inext, -1, sizeof(inext));

    int j = -1;
    inext[0] = -1;
    
    for(int i = 1; i < strlen(pattern); i++){
        while(j != -1 && pattern[i] != pattern[j + 1]){
            j = inext[j];
        }
        if(pattern[i] == pattern[j + 1]){
            j ++;
        }

        inext[i] = j;
    }
}

int KMP(){
    int ans = 0;

    int n = strlen(text);
    int m = strlen(pattern);
    
    int j = -1;

    getNext();

    for(int i = 0; i < n; i ++){
        while(j != -1 && text[i] != pattern[j + 1]){
            j = inext[j];
        }

        if(text[i] == pattern[j + 1]){
            j ++;
        }

        if(j == m-1){
            ans ++;
            //j == inext[j];                  // ?
            j = -1;
        }
    }


    return ans;
}

int main(){

    while(cin >> text, strcmp(text, "#")){
        cin >> pattern;

        int ans = KMP();

        cout << ans << "\n";
    }

    return 0;
}