#include<iostream>
#include<chrono>
#include<thread>
using namespace std;

void hello()
{
    this_thread::sleep_for(chrono::milliseconds(1000));
    this_thread::id id = this_thread::get_id();
    cout<<"Id is "<<id<<endl;
    cout<<"Hi from Hello"<<endl;
}
int main()
{
    thread t1(hello);
    t1.join();
   // t1.detach();
}