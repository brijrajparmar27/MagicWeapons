#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;vector<int> factors;

	for(int i=1;i<=n;i++) if(n%i==0) factors.push_back(i);

	cout<<factors.size()<<endl;
	for(int i:factors) cout<<i<<" ";
		
	return 0;
}