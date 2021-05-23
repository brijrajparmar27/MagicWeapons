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
		int Lostboy;cin>>Lostboy;
		Lostboy = songs[Lostboy-1];
		cout<<"Lostboy is "<<Lostboy<<endl;
		sort(songs,songs+n);
		for(int i=0;i<n;i++)
		{
			if(songs[i]==Lostboy)
			{
				cout<<i+1<<endl;
			}
		}
	}
	return 0;
}