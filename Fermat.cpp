#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int StorePrime(int n,int **P)
{
    int index=0,i,j;
    if(n>=2)
    {
       P[0][0]=1;
       P[0][1]=0;
       P[1][0]=2;
       P[1][1]=0;
       index=2;
    }
    else
    {
     P[0][0]=1;
     P[0][1]=0;
     index=1;
    }
    for(i=3;i<=n;i++)
    {
     for(j=2;j<=i/2;j++)
        if(i%j==0)
          break;
     if(j>i/2)
       {
        P[index][0]=i;
        P[index][1]=0;
        index++;
       }
    }
    return index;
}
int IncreaseIfPrime(int no,int **P,int right)
{
    int center,left=0,indicate=0;
    while(left<=right)
    {
     center=(left+right)/2;
     if(no<P[center][0])
       right=center-1;
     else
       if(no>P[center][0])
         left=center+1;
       else
         {
          (P[center][1])++;
          indicate=1;
          break;
         }
    }
  return indicate;
}
void Factorization(int n,int **P,int index)
{
    int a,b,no;
    if(IncreaseIfPrime(n,P,index))
      no=1;
    else
     if(n%2==0)
     {
      Factorization(n/2,P,index);
      Factorization(2,P,index);
     }
     else
     {
      a=ceil(sqrt(n));
      while(1)
      {
       no=pow(a,2)-n;
       b=static_cast<int>(sqrt(no));
       if(b*b==no)
         break;
       else
         a+=1;
      }
      Factorization(a+b,P,index);
      Factorization(a-b,P,index);
     }
}
int main()
{
    int input,**P=NULL,i,index=0,calculated=1;
    cout<<"Enter Number : ";
    cin>>input;
    if(input<=10)
    {
     P=new int* [10];
    for(i=0;i<10;i++)
       P[i]=new int[2];
    }
    else
    {
     P=new int* [input/2];
     for(i=0;i<input/2;i++)
        P[i]=new int[2];
    }
    if(P==nullptr)
    {
     cout<<"Error: Memory doesn't have space...."<<endl;
     exit(-1);
    }
    index=StorePrime(input,P);
    if(input<=0)
      {
       cout<<"Wrong Input....\n";
        exit(-1);
      }
    else
      if(IncreaseIfPrime(input,P,index-1))
        i=0;
      else
        Factorization(input,P,index-1);
    cout<<"Prime Number     Multiplicities"<<endl;
    for(i=0;i<index;i++)
       if(P[i][1]!=0)
       {
         calculated*=pow(P[i][0],P[i][1]);
         cout<<P[i][0]<<"                "<<P[i][1]<<endl;
       }
    if(calculated==input)
      cout<<input<<" is equals to ";
    else
      cout<<input<<" is not equals to ";
    for(i=0;i<index;i++)
       if(P[i][1]!=0)
         cout<<"("<<P[i][0]<<"^"<<P[i][1]<<").";
    cout<<endl;
   for(i=0;i<input/2;i++)
      delete []P[i];
   delete []P;
   return 0;
}