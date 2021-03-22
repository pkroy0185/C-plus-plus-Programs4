#include<iostream>
using namespace std;

class threeD
{
  int x,y,z;
  public:

    //member functions for + operators

};


int main()
{
  threeD a(1,2,3), b;

  cout << "Original value of a:  ";	a.show();
  cout << "Original value of b:  ";	b.show();
	
  b = a + 10;	
  cout << "Value of b after b = a + 10:  ";    b.show();
        
  b = 10 + a;	
  cout << "Value of b after b = 10 + a:  ";    b.show();
return 0;
}
