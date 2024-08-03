//3 to illustrate pointer to object
#include<iostream>
using namespace std;
class student
{
	private:
		char name[50];
		int roll;
	public:
		void input()
		{
			cin>>name>>roll;
		}
		void display()
		{
			cout<<name<<"\n";
			cout<<roll;
		}
};

int main()
{
	student s1,*s;
	s1.input();
	s=&s1;
	s->display();
	return 0;
}

