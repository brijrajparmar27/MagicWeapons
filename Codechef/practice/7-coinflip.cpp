#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int games;cin>>games;
		while(games--)
		{
			int i;cin>>i;	//initial value 1=head,2=tail
			int n;cin>>n;	//no. of coins
			int q;cin>>q;	//count 1=head,2=tail

			int heads,tails;
			if(i==2)
			{
				tails=ceil(n/2);
				heads=n-tails;
			}
			else
			{
				heads=ceil(n/2);
				tails=n-tails;	
			}
			/*cout<<"heads are "<<heads<<endl;
			cout<<"tails are "<<tails<<endl;	*/
			if(q==1)
			{
				cout<<heads<<endl;		
			}
			else
			{
				cout<<tails<<endl;	
			}
		}
	}
	return 0;
}