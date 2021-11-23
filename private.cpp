#include<iostream>
using namespace std;
class  number
{
	private:
		int a;
		public:
			int b;
			void show()
			{
				a=10,b=20;
				cout<<"the values of a and b are";
				cout<<"the value of a is"<<a<<endl;
				cout<<"the value of b is"<<b<<endl;
			}
};
int main()
{
	number v;
	v.show();
	cout<<"the values of b is"<<v.b;
}
