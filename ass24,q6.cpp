//6. Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
void swapFunction(int&,int&);
int main()
{
int a,b;
cout<<"Enter two number"<<endl;
cin>>a>>b;
cout<<"before swapping a= "<<a<<" b = "<<b<<endl;
swapFunction(a,b);
cout<<"After swapping a= "<<a<<" b = "<<b<<endl;

return 0;
}
void swapFunction(int &x,int &y)
{
  int temp;
  temp=x;
  x=y;
  y=temp;
}
