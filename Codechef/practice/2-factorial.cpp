#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		long long int zeros = 0;
		long long int n;cin>>n;
		while(n>5)
		{
			zeros +=n/5;
			n=zeros;
		}
		cout<<zeros<<endl;
	}
	return 0;
}