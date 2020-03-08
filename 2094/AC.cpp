#include <iostream> 
#include <string>
#include <algorithm>
#include <set>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define each(i,n) (int i=1;i<=(n);++i)

using namespace std;

int main() {
    
    set<string> winnerList;
    set<string> loserList;
    string winner,loser;
    int dataCount, flag;
    
    while(scanf("%d",&dataCount)!=EOF){
        if (dataCount == 0) break;
        winnerList.clear();
        loserList.clear();
        while(dataCount--){
            cin>>winner>>loser;
            winnerList.insert(winner);
            loserList.insert(loser);
        }
        flag = 0;
        set<string>::iterator winnerIter=winnerList.begin();
        for(;winnerIter!=winnerList.end();winnerIter++) {
            if (loserList.find(*winnerIter)==loserList.end()){
                //cout<<"["<<*winnerIter<<endl;本来以为需要输出赢家是谁呢。。。
                ++flag;
                //break;
            }
        }
        if (flag == 1) {
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }
    }
} 
/*
TestData(IN)
Alice Bob
Smith John
Alice Smith
a c
c d
d e
b e
a d
TestData(OUT)
Yes
No
*/