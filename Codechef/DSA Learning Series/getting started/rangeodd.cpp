#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;cin>>a;
	int b;cin>>b;
	for(int i = a;i<=b;i++)
	{
		if((i%2)!=0)
			cout<<i<<" ";
	}
	return 0;
}