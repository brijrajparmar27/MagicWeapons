#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int h;cin>>h;
		int x;cin>>x;
		int y;cin>>y;
		int c;cin>>c;
		if(((x+(y/2))*h)<=c)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
	}
	return 0;
}