#include<bits/stdc++.h>
using namespace std;

class Animal {
    public:
    virtual void fun()
    {
        cout<<"Animal Sound"<<endl;
    }
};

class Dog : public Animal {
    public:
    void fun() override  
    {
        cout<<"Barks"<<endl;
    }
};

int main()
{
    // Dog d;
    // d.fun();

    Dog d;
    Animal * a = &d;

    a->fun();
}