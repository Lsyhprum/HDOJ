# include <iostream>
# include <string>

using namespace std;

int main(){
    int n, k;
    double credits, score;
    string s;
    cin >> n;
    
    while(n --){
        cin >> k;

        double sum1 = 0;
        double sum2 = 0;
        bool flag = true;
        while(k --){
            cin >> s >> credits >> score;
            if(score >= 60 && flag){
                sum1 += (credits * score);
                sum2 += credits;
            }else{
                flag = false;
            }
        }

        if(flag){
            printf("%.2f\n", sum1 * 1.0f / sum2);
        }else{
            cout << "Sorry!\n";
        }
        if(n != 0){
            cout << "\n";
        }
    }
}