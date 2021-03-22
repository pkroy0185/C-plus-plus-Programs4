#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int no;
    char ch='y';
    ofstream fout("one.txt");
    while(ch=='y')
    {
       cin>>no;
       fout<<no;
       cout<<"Continue?(y/n) : ";
       cin>>ch;
    }
    return 0;
}