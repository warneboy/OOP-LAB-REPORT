//6 to illustrate array of pointer to object in C++
#include<iostream>
using namespace std;
class base
{
	
		public:
		virtual	void display()
			{    
			 cout<<"base";
			}
};

class derived1: public base 
{

		public:
			
			void display()
			{
			    cout<<"\nderived1";
			}
			
};

class derived2:public base
{   protected:
	int d;
	public:
		void display()
		{    
	        cout<<"\nderived2";
		}
};

class derived3:public base
{   protected:
	int d;
	public:
		void display()
		{    
	        cout<<"\nderived3";
		}
};
class derived4:public base
{   protected:
	int d;
	public:
		void display()
		{    
	        cout<<"\nderived4";
		}
};


int main()
{	
 base b;
 derived1 d1;
  derived2 d2;  
   derived3 d3;  
    derived4 d4;   
	base *btr[]={&b,&d1,&d2,&d3,&d4};
	for(int i=0;i<5;i++)
	{
		btr[i]->display();
		cout<<"\n";
	}
	return 0; 
}

