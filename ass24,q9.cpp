//9. Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
#include<iostream>
using namespace std;
int Max(int,int);
float Max(float ,float);

int main()
{
int a,b;
float m,n;
cout<<"Enter the number "<<endl;
cin>>a>>b;
cout<<"maximum of two number is "<<Max(a,b)<<endl;
cout<<"enter two real number "<<endl;
cin>>m>>n;
cout<<"maximum of two real number is "<<Max(m,n)<<endl;

return 0;
}
int Max(int a,int b)
{
 if(a>b)
    {
      return a;
    }
 else{
    return b;
 }
}
float Max(float n,float m)
{
 if(m>n)
    {
      return m;
    }
 else{
    return n;
 }
}
