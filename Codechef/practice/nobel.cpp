#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int m;cin>>m;
		int topics[m]={0};
		for(int i=0;i<n;i++)
		{
			int temp;cin>>temp;
			topics[temp-1]++;
		}
		sort(topics,topics+m);
		if(topics[0]==0)
		{
			cout<<"yes";
		}
		else
		{
			cout<<"no";
		}
	}
	return 0;
}