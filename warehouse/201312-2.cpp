#include<iostream>
#include<string>
//#include<cstring>
//#include<sstream>
using namespace std;



int main()
{
	string Str;
	cin>>Str;
	int a[10];
	a[0]=Str[0]-'0';
	a[1]=Str[2]-'0';
	a[2]=Str[3]-'0';
	a[3]=Str[4]-'0';
	a[4]=Str[6]-'0';
	a[5]=Str[7]-'0';
	a[6]=Str[8]-'0';
	a[7]=Str[9]-'0';
    a[8]=Str[10]-'0';
    if(Str[12]!='X'){ a[9]=Str[12]-'0';}
   
    int cou=0;
    for(int i=0;i<9;i++)
    cou+=a[i]*(i+1);
	//cout<<cou;
	int fl=cou%11;
	char F=fl+'0';
	if(fl==10){F='X';}
	char FF;
	if(Str[12]!='X')
	{FF=Str[12];
	}
	else {FF='X';
	}
	if(F==FF){cout<<"Right"<<endl;}
	else 
	{	
	  for(int i=0;i<12;i++)
	 {
	 cout<<Str[i];
	 
	 }
	 cout<<F<<endl;
	 }
	return 0;
	}
	

	

