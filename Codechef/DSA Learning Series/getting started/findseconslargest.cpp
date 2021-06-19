#include<bits/stdc++.h>
using namespace std;
int main()
{
	int nums[3];
	cin>>nums[0];
	cin>>nums[1];
	cin>>nums[2];
	sort(nums,nums+3);
	cout<<nums[1];
	return 0;
}