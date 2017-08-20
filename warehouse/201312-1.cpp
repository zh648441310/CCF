#include<iostream>
#include<cstring>
using namespace std;
int a[10001];

int main()
{
	memset(a,-1,sizeof(a));
	int num=0;
	cin>>num;
	for(int i=0;i<num;i++)
	{
		int tmp;
		cin>>tmp;
		a[tmp]++;
	}
	int Max=a[0];
	int pos =0;
	for(int i=1;i<10001;i++)
	{
		if(a[i]>Max){Max=a[i];pos=i;}
	}
	cout<<pos;
	return 0;
}
