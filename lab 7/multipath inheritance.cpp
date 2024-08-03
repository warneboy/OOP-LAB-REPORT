// 2 to illustrate the multipath inheritance to solve ambiguity issues
#include<iostream>
using namespace std;

class base
{
		public:
			void display()
			{
				cout<<"\ndisplay base";
			}	
};

class base1:public base
{
	public:
		void display1()
		{
			base::display();
			cout<<"\ndisplay base1";
		}
};
class base2: public base
{
	public:
		void display2()
		{
		
			cout<<"\ndisplay base2";
		}
};
class derived: public base1, public base2
{
  public:
  void display()
  {
  	 base1::display1();
  	 base2::display2();
  	 cout<<" \ndisplay derived";
	  }	
};

int main()
{
	derived d;
	d.display();
	return 0;
}
