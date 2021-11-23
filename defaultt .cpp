#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	int rno;
	string name;
	float marks;
	public:
		student(int rn,string nm,float ln)
		{
			rno=120;
			name="varshini";
			marks=600;
		}
		void display()
		{
			cout<<"RNO"<<rno;
			cout<<"NAME"<<name;
			cout<<"MARKS"<<marks;
		}
};//end of class
int main()
{
	student s(120,"varshini",600);
	s.display();
	return(0);
}
