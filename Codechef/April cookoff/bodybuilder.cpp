#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int times[n+1];
		int r;cin>>r;
		for(int i=0;i<n;i++)
		{
			cin>>times[i];
		}
		times[n]=0;
		int tension[n];
		for(int i=0;i<n;i++)
		{
			cin>>tension[i];
		}
		int work = 0;
		for(int i=0;i<n;i++)
		{
			work+=tension[i];
			work-=r*times[i+1]-times[i];
		}
		cout<<work<<endl;
	}
	return 0;
}