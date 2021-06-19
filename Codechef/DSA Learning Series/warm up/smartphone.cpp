#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	int budget[n];
	int max;
	for(int i=0;i<n;i++)
	{
		cin>>budget[i];
	}
	sort(budget,budget+n,greater<int> ());
	for(int i=n;i>0;i--)
	{
		if(max<(budget[i]*(i+1)) OR i==1)
		{
			max = (budget[i]*(i+1));
		}
		else
		{
			break;
		}
	}
	cout<<max<<endl;
	return 0;
}