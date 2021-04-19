#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int items[n];
		int k;cin>>k;
		for(int i=0;i<n;i++)
		{
			cin>>items[i];
		}
		sort(items,items+n);
		int bagA,bagB;
		bagA=bagB=0;
		for(int i=0;i<n;i++)
		{
			if(i<k)
			{
				bagA+=items[i];
			}
			else
			{
				bagB+=items[i];
			}
		}
		cout<<abs(bagB-bagA)<<endl;
	}
	return 0;
}