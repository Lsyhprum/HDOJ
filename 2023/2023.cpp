# include <iostream>

using namespace std;

const int maxn = 51; // 学生最大数
const int maxm = 6; // 课程最大数 + 平均成绩
double score[maxn][maxm];

int main(){
    int n, m;

    while(cin >> n >> m){
        for(int i = 0; i <= n; i ++){
            for(int j = 0; j <= m; j ++){
                score[i][j] = 0;
            }
        }
        
        for(int i = 0; i < n; i ++){         // 学生
            for(int j = 0; j < m; j ++){     // 课程
                cin >> score[i][j];
                score[i][m] += score[i][j];  // 加入该学生平均成绩
                score[n][j] += score[i][j];  // 加入该课程平均成绩
            }
        }
        // 学生平均成绩
        for(int i = 0; i < n; i ++){          
            score[i][m] /= (m * 1.0);
            if(i != 0)
                printf(" ");
            printf("%.2f", score[i][m]);
        }
        cout << endl;
        // 课程平均成绩
        for(int j = 0; j < m; j ++){
            score[n][j] /= (n * 1.0);
            if(j != 0)
                printf(" ");
            printf("%.2f", score[n][j]);
        }
        cout << endl;
        // 优等生
        int sum = 0;
        for(int i = 0; i < n; i ++){
            bool flag = true;
            for(int j = 0; j < m; j ++){
                if(score[i][j] < score[n][j]){
                    flag = false;
                    break;
                }
            }
            if(flag)
                sum ++;
        }
        cout << sum << endl;
        cout << endl;
    }

    return 0;
}