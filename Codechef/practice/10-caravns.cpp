#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int nfs=0;
		int min;
		int n;cin>>n;
		int temp;
		for(int i=0;i<n;i++)
		{
			if(i==0)
			{
				cin>>min;
				nfs++;
				continue;
			}
			cin>>temp;
			if(temp<min)
			{
				nfs++;
				min = temp;
			}
		}
		cout<<nfs<<endl;
	}
	return 0;
}