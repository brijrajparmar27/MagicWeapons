#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int workers[n];
		int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>workers[n];
			sum+=workers[n];
		}
		sort(workers,workers+n);
		cout<<sum-n*workers[0];
	}
	return 0;
}