#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testcases;
	cin>>testcases;
	for(int q=0;q<testcases;q++)
	{
		int inputs;
		cin>>inputs;
		for(int w=0;w<inputs;w++)
		{
			int initial,tocount,n;
			cin>>initial>>n>>tocount;
			if(initial==tocount)
			{
				if(n%2==0)
				{
					cout<<n/2<<endl;
				}
				else
				{
					cout<<(n-1)/2<<endl;
				}
			}
			else
			{
				cout<<(n+1)/2<<endl;
			}
		}
	}
	return 0;
}
