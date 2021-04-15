#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		string jw;cin>>jw;
		string st;cin>>st;
		int jewles=0;
		for(int i=0;i<st.length();i++)
		{
			for(int j=0;j<jw.length();j++)
			{
				if(st[i]==jw[j])
				{
					jewles++;
					break;
				}
			}
		}
		cout<<jewles<<endl;
	}
	return 0;
}