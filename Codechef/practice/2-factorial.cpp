#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		long long int f = 5;
		long long int n;cin>>n;
		long long int zeros=0;
		while(n/f>0)
		{
			zeros += (n/f);
			f=f*5;
		}
		cout<<zeros<<endl;
	}
	return 0;
}