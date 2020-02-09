# include <iostream>
# include <sstream>
# include <set>

using namespace std;

int main(){
    string s;
    while(getline(cin, s), s != "#"){
        istringstream is(s);
        string w;
        set<string> words;
        while(is >> w)
            words.insert(w);
        cout << words.size() << endl;
    }
    return 0;
}