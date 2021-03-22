#include<iostream>
using namespace std;
class media
{
    protected:
         string title;
         float price;
    public:
         media(string s,float p)
         {
            title=s;
            price=p;
         }
        virtual void Display()
        {  
        }
};
class book:public media
{
         int pages;
    public:
         book(string t,float p,int pg):media(t,p)
         {
            pages=pg;
         }
        void Display()
        {
           cout<<"Title : "<<title<<endl;
           cout<<"Price : "<<price<<endl;
           cout<<"pages : "<<pages<<endl;
        }
};
class tape:public media
{
         float time;
    public:
         tape(string t,float p,float tm):media(t,p)
         {
            time=tm;
         }
        void Display()
        {
           cout<<"Title     : "<<title<<endl;
           cout<<"Price     : "<<price<<endl;
           cout<<"play time : "<<time<<endl;
        }
};
int main()
{
    book b1("Vidya Vahini",11.22,123);
    tape t1("Pure love",90.99,90);
    media *bptr,*tptr;
    bptr=&b1;
    cout<<"Book Details...\n";
    bptr->Display();
    tptr=&t1;
    cout<<"Tape Details...\n";
    tptr->Display();
    media *list[2];
    list[0]=&b1;
    list[1]=&t1;
    for(int i=0;i<2;i++)
    {
       list[i]->Display();
       cout<<endl;
    }
    return 0;
}