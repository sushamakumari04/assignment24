//1. Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
int PrimeNum(int);
int main()
{
int x,y;
cout<<"Enter a number"<<endl;
cin>>x;
y=PrimeNum(x);
if(y==1)
{
 cout<<"prime number"<<endl;
}
else
{
cout<<"not a prime number"<<endl;
}
return 0;
}
int PrimeNum(int n)
{
 int i;
 if(n<=1)
 {
   return 0;
 }
 for( i=2;i<n;i++)
 {
   if(n%i==0)
    {
      return 0;
      break;
    }
 }
 return 1;
}
