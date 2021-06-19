#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,generated;cin>>n;
		int max=0;
		int s,v,p;
		while(n--)
		{
			cin>>s>>p>>v;
			generated = (p/(s+1))*v;
			if(generated>max)
			{
				max = generated;
			}
		}
		cout<<max<<endl;
	}
	return 0;
}