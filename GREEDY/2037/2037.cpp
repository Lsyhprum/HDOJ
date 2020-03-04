# include <iostream>
# include <algorithm>

using namespace std;

struct area{
    int start;
    int end;
}A[110];

bool cmp(area a, area b){
    if(a.start != b.start) return a.start < b.start;
    else a.end < b.end;
}

int main(){
    int n, start, end;

    while(cin >> n, n){
        for(int i = 0; i < n; i ++)
            cin >> A[i].start >> A[i].end;
        
        sort(A, A + n, cmp);

        int cnt = 1, lastX = A[0].end;
        for(int i = 1; i < n; i ++){
            if(A[i].start >= lastX){
                cnt ++;
                lastX = A[i].end;
            }else{
                if(A[i].end < lastX)
                    lastX = A[i].end;
            }
        }

        cout << cnt << endl;
    }
}