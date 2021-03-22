#include<iostream>
using namespace std;
class student
{
    protected:
          int number;
    public:
          void GetNumber()
          {
             cout<<"Enter roll no : ";
             cin>>number;
          }
          virtual void Display()
          {
             cout<<"Roll no : "<<number<<endl;
          }
};
class test
{
    protected:
         float sub1,sub2;
    public:
         void GetMarks()
         {
            cout<<"Enter marks of subject1 and subject2 : ";
            cin>>sub1>>sub2;
         }
         void Display()
         {
            cout<<"Sub1 : "<<sub1<<"     Sub2 : "<<sub2<<endl;
         }
};
class result:public student,public test
{
    float total;
    public:
         void Display()
         {
            student::Display();
            test::Display();
            total=sub1+sub2;
            cout<<"Total marks : "<<total<<endl;
         }
};
int main()
{
    result S1;
    student *sptr;
    S1.GetNumber();
    S1.GetMarks();
    sptr=&S1;
    sptr->Display();
    return 0;
}