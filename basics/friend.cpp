#include<iostream>
using namespace std;

class Temp {
    //private:
    //public:
    int x = 10;

    public:
    friend int main();
};

int main()
{
    Temp t1;
    cout<<t1.x<<endl;
}