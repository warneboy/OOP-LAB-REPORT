//5 to illustrate inheritance of virtual attributes in C++
#include<iostream>
using namespace std;
class base
{
	
		public:
		virtual	void display()
			{    cout<<"base";
			   
			}
};

class base1: public base 
{

		public:
			
			void display()
			{
			    cout<<"\nbase1";
			}
			
};

class derived:public base1
{   protected:
	int d;
	public:
		void display()
		{    
	        cout<<"\nderived";
		}
};

int main()
{
	derived d;
	base1  *b;
    b=&d;
    b->display();
    return 0;
   
}

