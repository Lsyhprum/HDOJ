# include <iostream>
# include <cstring>
# include <set>

using namespace std;

int main(){
    char s[1024];
    set<string> words;
    while(gets(s), strcmp(s, "#")){
        words.clear();
        char *word = strtok(s, " ");
        while(word){
            words.insert(word);
            word = strtok(NULL, " ");
        }
        cout << words.size() << endl;
    }
    return 0;
}


