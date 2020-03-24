# include <iostream>

using namespace std;

int main(){
    int i, sum;


    while(scanf("%d", &i) == 1){
        if(i == 1){
            sum = 1;
        }else{
            if(i % 2 == 0){
                sum = (1 + i) * (i / 2);
            }else{
                sum = (1 + i) * (i / 2) + (i / 2) + 1;
            }
        }

        printf("%d\n\n", sum);
    }

    return 0;


}