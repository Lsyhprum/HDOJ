#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	
	while(cin>>n)
	{
		long long int s[50];
		s[1]=3,s[2]=8;
		for(int i=3;i<=n;i++)
		s[i]=2*s[i-1]+2*s[i-2];
		cout<<s[n];
		cout<<endl;
			
		
	
		
	}
	return 0;
}