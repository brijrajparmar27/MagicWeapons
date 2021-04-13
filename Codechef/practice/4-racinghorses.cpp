#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int horses[n];
		int min;
		for(int i=0;i<n;i++)
		{
			cin>>horses[i];
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(i==0 and j==1)
				{
					min = abs(horses[j]-horses[i]);
				}
				else if(abs(horses[j]-horses[i])<min)
				{
					min = horses[j]-horses[i];
				}
			}
		}
		cout<<min<<endl;
	}
	return 0;
}