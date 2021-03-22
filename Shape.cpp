#include<iostream>
using namespace std;
class RightTriangle
{
    float base,height;
    public:
         RightTriangle(float b,float h)
         {
            base=b;
            height=h;
         }
};
class Circle
{
    float radius;
    public:
         Circle(float r)
         {
            radius=r;
         }
};
class Cone
{
    float radius;
    float height;
    public:
         Cone(float r,float h)
         {
            radius=r;
            height=h;
         }
};
class Box
{
    float length;
    float width;
    float height;
    public:
         Box(float l,float w,float h)
         {
            length=l;
            width=w;
            height=h;
         }
};
class TwoD:public RightTriangle,public Circle 
{
    public:
      perimeter
};
int main()
{
    cout << "Hello,World!\n";
    return 0;
}