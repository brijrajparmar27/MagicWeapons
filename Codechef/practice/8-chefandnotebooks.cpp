#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		bool islucky = false;
		int len;cin>>len;
		int left;cin>>left;
		int money;cin>>money;
		int books;cin>>books;
		while(books--)
		{
			int pages;cin>>pages;
			int cost;cin>>cost;
			int wantedPages = len-left;
			if(wantedPages<=pages and cost<=money)
			{
				islucky = true;
			}
		}
		if(islucky)
		{
			cout<<"LuckyChef"<<endl;
		}
		else
		{
			cout<<"UnluckyChef"<<endl;
		}
	}
	return 0;
}