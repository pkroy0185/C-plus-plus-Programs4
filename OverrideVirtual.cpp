#include<iostream>
using namespace std;
class Base 
{
    public:
       void Display()
       {
          cout<<"Display Base..."<<endl;
       }
       void virtual Show()
       {
          cout<<"Show Base..."<<endl;
       }
};
class Derived:public Base 
{
    public:
       void Display()
       {
          cout<<"Display Derived..."<<endl;
       }
       void Show()
       {
          cout<<"Show Derived..."<<endl;
       }
};
int main()
{
    Base B;
    Derived D;
    Base *bptr;
    Derived *dptr;
    cout<<"bptr points to base class :\n";
    bptr=&B;
    bptr->Display();
    bptr->Show();
    cout<<"bptr points to derived class :\n";
    bptr=&D;
    bptr->Display();
    bptr->Show();
    return 0;
}