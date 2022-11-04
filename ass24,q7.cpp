//7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int,int,int=0);
int main()
{
int a,b,c,sum;
cout<<"Enter the two numbers"<<endl;
cin>>a>>b;
sum=add(a,b);
cout<<"sum is = "<<sum<<endl;
cout<<"Enter the third numbers"<<endl;
cin>>c;
sum=add(a,b,c);
cout<<"sum is = "<<sum<<endl;

return 0;
}
int add(int a,int b,int c)
{
  return (a+b+c);
}

