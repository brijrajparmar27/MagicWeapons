#include<bits/stdc++.h>
using namespace std;

void displayjobs(int jobs[],int temp,int n)
{
	vector<int> job;
	for(int i=0;i<n;i++)
	{
		int temp = i;
		if(jobs[i]==0)
		{
			job.push_back(temp+1);
		}
	}
	for(int i=0;i<job.size();i=i+2)
	{
		cout<<job[i]<<" ";
	}
	cout<<endl;
	for(int i=1;i<job.size();i=i+2)
	{
		cout<<job[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int t;cin>>t;
	while(t--)
	{
		//n is total no. of jobs
		int n;cin>>n;
		//m is no. of jobs completed from n jobs
		int m;cin>>m;

		//array of n numbers each for one job
		//default value 0 for every job
		int jobs[n]={0};

		//completed jobs have value 1
		//think hashing
		while(m--)
		{
			int completed;cin>>completed;
			jobs[completed-1]=1;
		}

		displayjobs(jobs,0,n);
	}
	return 0;
}