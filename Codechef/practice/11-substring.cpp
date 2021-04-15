#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		string str;cin>>str;
		int substring=0;
		int a=1;
		for(int i=0;i<n;i++)
		{
			if(str[i]=='1')
			{
				substring+=a;
				a++;
			}
		}
		cout<<substring<<endl;
	}
	return 0;
}