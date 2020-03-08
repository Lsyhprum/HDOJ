# include <iostream>
# include <algorithm>
# include <sstream>
# include <string>
# include <cstring>

using namespace std;

const int maxn = 13;
struct acmer{
    string name;
    int num;
    int time;
    int time[maxn];
    int num[maxn];
}A[1024];

bool cmp(acmer a, acmer b){

}

int main(){
    int n, m;
    cin >> n >> m;

    getchar();          // 易錯
 
    string s;
    int num = 0;       // 第几名 ACMer
    while(getline(cin, s)){
        stringstream ss(s);
        string part;

        int pos = 0;         // ACM 第 几題
        while(ss >> part){
            if(pos == 0){
                A[num].name = part;       // 名字
            }else{
                int left_ = part.find("(");      // begin 類型 ？ int
                int n = 0, t;
                if(left_ == s.npos){
                    t = atoi(part.c_str());
                }else{
                    t = atoi(part.substr(0, left_).c_str());
                    n= atoi(part.substr(left_ + 1, part.length()-1).c_str());
                }
                A[num].num[pos-1] = n;
                A[num].time[pos-1] = t;
            }
            pos ++;
        }
        num ++;
    }

    sort(0, num, cmp);

    for(int i = 0; i < num; i ++){
        printf("%10s ", A[i].name);
        for(int j = 0; j < n; j ++){
            cout << A[i].time[j] << " ";
            cout << A[i].num[j] << " ";
        }
        cout << endl;
    }
    return 0;
}