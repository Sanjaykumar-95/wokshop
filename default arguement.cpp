#include<iostream>
using namespace std;
int sum(int a,int b=10,int c=15,int d=20);
int main()
{
	int a=2;
	int b=3;
	int c=4;
	int d=5;
	cout<<"\n sum ="<<sum(a,b,c,d)<<endl;
	cout<<"\n sum="<< sum(a,b,c);
}
int sum(int i,int j,int k, int l);
{
	return(i+j+k+l);
}
