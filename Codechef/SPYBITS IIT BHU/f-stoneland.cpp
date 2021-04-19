#include<bits/stdc++.h>
using namespace std;

vector<int> findvisible(int stones[],int n,int target)
{
	vector<int> visible;
	long long int max = stones[target-1];
	for(int i=target;i<n;i++)
	{
		if(stones[i]>max)
		{
			max = stones[i];
			visible.push_back(stones[i]);
			//cout<<max<<endl;
		}
	}
	return visible;
}

int findcommon(vector<int> st,vector<int> jw)
{
	int jewles = 0;
	for(int i=0;i<st.size();i++)
	{
		for(int j=0;j<jw.size();j++)
		{
			if(st[i]==jw[j])
			{
				jewles++;
				break;
			}
		}
	}
	return jewles;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;	//no. of stones
		cin>>n;
		int stones[n]={3, 10, 20, 20, 5, 50};
		int m;	//queries
		cin>>m;
		for(int i=0;i<n;i++)	//get heights
		{
			cin>>stones[i];
		}
		while(m--)
		{
			int a,b;
			cin>>a;cin>>b;
			cout<<findcommon(findvisible(stones,n,a),findvisible(stones,n,b))<<endl;
		}
	}
	return 0;
}