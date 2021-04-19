#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int girls[n];
		int boys[n];
		for(int i=0;i<n;i++)
		{
			cin>>boys[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>girls[i];
		}
		sort(boys,boys+n);
		sort(girls,girls+n);
		int max =0;
		int j=n-1;
		for(int i=0;i<n;i++)
		{
				if(boys[i]+girls[j]>max)
				{
					max = boys[i]+girls[j];
				}
				j--;
		}
		cout<<max<<endl;
	}
	return 0;
}