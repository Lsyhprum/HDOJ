#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
 
int main()
{
    int N;
    cin >> N;
    while(N--)
    {
        int ball,score1,score2;
        cin >> ball >> score1 >> score2;
        if(ball > 6)
        {
            score1 += (ball-6)*8+27;
        }
        else
        {
            int i = 7;
            while(ball--)
            {
                score1 += i;
                i--;
            }
        }
        if(score1 >= score2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
 
    return 0;
}