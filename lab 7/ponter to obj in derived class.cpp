//4 to illustrate pointer to object in derived class
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
			{    cout<<"base*base:";
			    cout<<a*a;
			}
};


class derived:public base
{   protected:
	int d;
	public:
		void input()
		{
			base::input();
			cout<<"derived:";
			cin>>d;
		}
		void display()
		{    
	       
	        
	        cout<<"\n"<<d*a;
	
		}
};

int main()
{
	
    base *b;
	derived d1;
     b=&d1;
    b->input();
    b->display();
	return 0;
}

