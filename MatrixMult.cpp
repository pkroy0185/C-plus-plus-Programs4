#include<iostream>
using namespace std;
    /*for(i=0;i<m;i++)
       delete []p;*/
class matrix
{
    int **p;
    int row,col;
    public:
          matrix operator *(matrix );
          friend istream& operator >>(istream &,matrix &);
          friend ostream& operator <<(ostream &,matrix &);
};
istream& operator >>(istream &din,matrix &m)
{
    cout<<"Enter rows and columns of the matrix : ";
    din>>m.row>>m.col;
    m.p=new int *[m.row];
    for(int i=0;i<m.row;i++)
       m.p[i]=new int [m.col];
    cout<<"Enter "<<m.row*m.col<<" elements of the matrix : "<<endl;
    for(int i=0;i<m.row;i++)
       for(int j=0;j<m.col;j++)
          cin>>m.p[i][j];
    return din;
}
ostream& operator <<(ostream &dout,matrix &m)
{
    cout<<"Displaying elements of the matrix...\n";
    for(int i=0;i<m.row;i++)
    {
       for(int j=0;j<m.col;j++)
          cout<<"   "<<m.p[i][j];
       cout<<endl;
    }
    return dout;
}
matrix matrix::operator *(matrix B)
{
    matrix P;
    if(col==B.row)
    {
     P.row=row;
     P.col=B.col;
     P.p=(int**)calloc(P.row,sizeof(int*));
			  for(int i=0;i<P.row;++i)
				   P.p[i]=(int*)calloc(P.col,sizeof(int));
     for(int i=0;i<row;i++)
        for(int j=0;j<col || j<B.col;j++)
        {
          P.p[i][j]=0;
          for(int k=0;k<col;k++)
          {
             P.p[i][j]=P.p[i][j]+(p[i][k]*B.p[k][j]);
          }
        }
    }
    else
     {
      cout<<"Sorry.... Can't multiply matrices A and B..."<<endl;
      exit(-1);
     }
    return P;
}
int main()
{
    matrix A;
    cout<<"This program finds multiplication of two matrices....\n\n";
    cout<<"Matrix A :\n";
    cin>>A;
    cout<<A;
    matrix B;
    cout<<"Matrix B :\n";
    cin>>B;
    cout<<B;
    matrix C;
    C=A*B;
    cout<<"Product :\n";
    cout<<C;
    return 0;
}