# include <iostream>
# include <set>

using namespace std;

int main(){
    int n , m, tmp;
    set<int> cap;
    while(cin >> n >> m, n || m){
        cap.clear();
        while(n --){
            cin >> tmp;
            cap.insert(tmp);
        }
        for(int i = 0; i < m; i ++){
            cin >> tmp;
            if(cap.find(tmp) != cap.end()){
                cap.erase(tmp);
            }
        }
        if(cap.size() == 0)
            printf("NULL");
        else
            for(set<int>::iterator it = cap.begin(); it != cap.end(); it ++){
                printf("%d ", *it);
            }
        printf("\n");
    }
    return 0;
}