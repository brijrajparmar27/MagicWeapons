#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	int num[n];
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		cout<<num[i];
		if(i!=0)
		{
			cout<<" ";
		}
	}
	return 0;
}