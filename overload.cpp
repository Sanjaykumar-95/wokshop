#include<iostream>
using namespace std;
int sum(int x,int y)
{
	return x+y;
}
double sum(double x,double y)
{
	return x+y;
}
int sum(int x, int z)
{
	return x+y+z;
}
double sum(int x, double y)
{
	return x+y;
}
int main()
{
	cout<<"the sum of two integers:"<<sum(10,20)<<endl;
	cout<<"the sum of two floats:"<<sum(10.5,20.7)<<endl;
	cout<<"the sum of three integers:"<<sum(10,20,30)<<endl;
	cout<<"the sum of integers&double:"<<sum(10,20.5)<<endl;
	
}
