#include<iostream>
using namespace std;
#include<string>
void trim0(string& b)
{
	int len = b.length();
	if(b.find('.')!=string::npos)
	{
		for(int i=len-1;b[i]=='0';i--)
			len--;
		b=b.substr(0,len);
	}
	if(b[len-1]=='.')
		b=b.substr(0,len-1);
}
void main()
{
	string a,b;
	while(cin>>a>>b)
	{
		trim0(a);
		trim0(b);
		if(a==b)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}