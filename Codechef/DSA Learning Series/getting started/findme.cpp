#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,temp;cin>>n;cin>>k;
	bool isfound=false;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		if(temp==k)
			isfound=true;
	}
	if(isfound)
		cout<<"1";
	else
		cout<<"-1";
	return 0;
}