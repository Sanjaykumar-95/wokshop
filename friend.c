#include<iostream>
using namespace std;
class base
{
	int a,b;
	public:
		void read()
		{
			cout<<"\n enter two valus of a,b";
			cin>>a>>b;
		}
		friend float mean(base x);
};
float mean(base x)
{
	float m;
	m=float(x.a+x.b/2);
	return(m);
}
int main()
{ 
base x;
x.read();
cout<<"\n mean:"<<x.mean(x);
return(0);
}
