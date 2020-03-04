/*合法标识符：
  所有标识符必须由字母或下划线开头
  标识符不能是关键字(此处不考虑)
 */
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();      //这个必须写，就是这玩意儿让人头皮发麻
    while(n--)
    {
        string a;
        getline(cin,a);
        int i;
        if(!(a[0]=='_' || (a[0]>='a' && a[0]<='z') || (a[0]>='A' && a[0] <= 'Z')))
        {
            cout<<"no"<<endl;
        }
        else
        {
            for(i=1;i<a.size();i++)
            {
                if(!(a[i]=='_' || (a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i] <= 'Z')||(a[i]>='0'&& a[i]<='9')))
                {
                    cout<<"no"<<endl;
                    break;
                }
            }
            if(i == a.size())
                cout<<"yes"<<endl;
        }
    }
}
