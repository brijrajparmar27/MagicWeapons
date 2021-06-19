#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,str1,str2;cin>>s;
		if(s.length()%2==0)
		{
			int pivot = ((s.length())/2);
			str1 = s.substr(0,pivot);
			str2 = s.substr(pivot,s.end());
		}
		cout<<str1<<endl<<str2;
	}
	return 0;
}