#include<iostream>
using namespace std;
class test
{
    int x,y,z;
    public:
        test(int ,int ,int );
        void Display();
        friend void operator ~(test &);
};
test::test(int p,int q,int r)
{
    x=p;
    y=q;
    z=r;
}
void test::Display()
{
    cout<<x<<" "<<y<<" "<<z<<endl;
}
void operator ~(test &t)
{
    t.x=-t.x;
    t.y=-t.y;
    t.z=-t.z;
}
int main()
{
    int p,q,r;
    cout<<"Enter p, q and r : ";
    cin>>p>>q>>r;
    test a(p,q,r);
    cout<<"a is : ";
    a.Display();
    cout<<endl;
    ~a;
    cout<<"Inside Main....\n";
    a.Display();
    return 0;
}