//1 to illustrate hybrid inheritance
#include<iostream>
using namespace std;
class base
{
	protected:
		int a;
		public:
			void input()
			{   cout<<"base:";
				cin>>a;
			}
			void display()
			{   
				cout<<a;
			}
};
class base1: public base 
{
	protected:
		int b;
		public:
				void input()
			{   
			    base::input();
			    cout<<"base1:";
				cin>>b;
			}
			void display()
			{
			    base::display();
			    cout<<"\n";
				cout<<b;
			}
			
};
class base2: public base 
{
	protected:
		int c;
		public:
				void input()
			{   cout<<"base2:";
				cin>>c;
			}
			void display()
			{   
			
				cout<<c;
			}
			
};
class derived:public base1, public base2
{   protected:
	int d;
	public:
		void input()
		{
			base1::input();
			base2::input();
		}
		void display()
		{    
		
		cout<<"in derived class:";
		base1::display();
		     cout<<"\n";
		     base2::display();
		
		}
};

int main()
{
	derived d;
	d.input();
	d.display();
	return 0;
}

