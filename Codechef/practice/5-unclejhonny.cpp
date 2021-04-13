#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int songs[n];
		for(int i=0;i<n;i++)
		{
			cin>>songs[i];
		}
		int unclej;cin>>unclej;
		unclej = songs[unclej-1];
		cout<<"unclej is "<<unclej<<endl;
		sort(songs,songs+n);
		for(int i=0;i<n;i++)
		{
			if(songs[i]==unclej)
			{
				cout<<i+1<<endl;
			}
		}
	}
	return 0;
}

//0 1 2 3
//1 3 4 2
//3
//1 2 3 4
//