#include<bits/stdc++.h>
using namespace std;
int calcladdo(string str)
{
	int laddoo=0;
	if(str == "CONTEST_WON")
		{
			int rank;cin>>rank;
			laddoo+=300;
			if(rank<20) laddoo+=20-rank;
		}

		else if(str == "TOP_CONTRIBUTOR")
		{
			laddoo+=300;
		}

		else if(str ==  "BUG_FOUND")
		{
			int severity;cin>>severity;
			laddoo+=severity;
		}

		else if(str == "CONTEST_HOSTED")
		{
			laddoo+=50;
		}
	return laddoo;
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int activity,checkout;
		int laddo = 0;
		string inp;
		cin>>activity;
		cin>>inp;
		
		if(inp=="INDIAN") checkout = 200;
		else checkout = 400;
		
		while(activity--)
		{
			cin>>inp;
			laddo+=calcladdo(inp);
		}
		cout<<laddo/checkout<<endl;
	}
	return 0;
}