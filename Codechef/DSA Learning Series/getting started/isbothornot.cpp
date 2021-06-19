#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	int status = 0;
	if(n%5==0)
		status++;
	if(n%11==0)
		status++;
	switch(status)
	{
		case 0:
		cout<<"NONE";
		break;
		case 1:
		cout<<"ONE";
		break;
		case 2:
		cout<<"BOTH";
		break;
	}
	return 0;
}