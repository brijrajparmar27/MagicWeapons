#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int pass = 0;
		int marks[3];
		int requires[3];
		for(int i=0;i<3;i++)
		{
			cin>>requires[i];
		}
		long long int totalRequired;
		cin>>totalRequired;
		long long int totalGained = 0;
		for(int i=0;i<3;i++)
		{
			cin>>marks[i];
			totalGained+=marks[i];
		}
		for(int i=0;i<3;i++)
		{
			if(marks[i]>=requires[i])
			{
				pass++;
			}
		}
		if(totalGained>=totalRequired)
			pass++;
		if(pass>=4)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
	}
	return 0;
}