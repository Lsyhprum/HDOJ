# include <iostream>
# include <math.h>

using namespace std;

int main(){
    int m, n, s;

    while(cin >> m >> n){
        int row = 0, col = 0, score = 0, tmp;
        for(int i = 0; i < m; i ++){
            for(int j = 0; j < n; j ++){
                cin >> tmp;
                if(abs(tmp) > abs(score)){
                    row = i;
                    col = j;
                    score = tmp;
                }
            }
        }
        printf("%d %d %d\n", row + 1, col +1, score);
    }
    
    return 0;
}