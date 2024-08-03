// 7. to illustrate the concept of virtual function using pointer to object
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class" ;
    }
};

class Derived : public Base {
public:
    void show()
    {
        cout << "Derived class";
    }
};

int main() {
    Base *b;
    Derived d;
    b = &d;
    b->show(); 
    return 0;
}

