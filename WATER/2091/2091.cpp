#include <iostream>

using namespace std;

int main()
{
    int n, flag=0;
    char c;
    while(cin>>c&&c!='@'){
        cin>>n;
        if(flag!=0) cout<<endl;
        for(int i=0; i<n-1; i++){

            for(int j=n-i-2; j>=0; j--)
                cout<<" ";

            cout << c;

            if(i==0) cout<<endl;
            else{
                for(int k=i*2-2; k>=0; k--)
                    cout<<" ";

                cout << c << endl;
            }
        }
         for(int i=0; i<2*n-1; i++)
                cout<<c;
            cout<<endl;
        flag = 1;
        //cout<<"exo me"<<endl;
    }
    return 0;
}