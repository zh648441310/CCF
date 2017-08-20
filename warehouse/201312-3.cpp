#include<iostream>
#include<cstring> 
using namespace std;

int a[1001];

long long fun(int B,int E)
{
	int Size=E-B+1;
	long long Min=a[B];
	for(int i=B+1;i<=E;i++)
	{
		if(a[i]<Min){Min=a[i];}
	}
	//cout<<Min<<endl;
	return Size*Min;
}

int main()
{
	memset(a,0,sizeof(a));
	int num=0;
	cin>>num;
	for(int i=0;i<num;i++)
	{
		cin>>a[i];
	}	
	//cout<<fun(2,3);
	long long Max=a[num-1];
	for(int i=num-1;i>=0;i--)
	{
		for(int j=0;j<=i;j++) 
		{  
		long long tmp=fun(j,i);
		if(tmp>Max)
		{
			Max=tmp;
		}
		}
	}
cout<<Max;
	
	
}
