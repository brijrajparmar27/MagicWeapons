#include<bits/stdc++.h>
using namespace std;
bool valuechanged = false;
int findclosest(vector<int> arr,int n,int num)
{
	for(int i=n-1;i<=0;i--)
	{
		if(arr[i]<=num)
		{
			valuechanged = true;
			return arr[i];
		}
	}
	return 0;
}

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;	//notes in wallet
		int m;cin>>m;
		int temp;	//mugger demand money
		//int notes[n];
		vector<int> notes;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			notes.push_back(temp);
		}
		
		sort(notes.begin(),notes.end());
		
		do
		{
			valuechanged = false;
			m-=findclosest(notes,n,m);
		}while(m!=0 or valuechanged!=false);

		if(m==0)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}

	}
	return 0;
}