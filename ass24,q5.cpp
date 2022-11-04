//5. Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;
int fib(int);
int main()
{
int num,f;
cout<<"Enter a number"<<endl;
cin>>num;
f=fib(num);
if(f==1)
{
 cout<<num<<" is a term of fib series "<<endl;
}
else if(f==-1)
{
 cout<<num<<" is not a term in fib series"<<endl;
}
return 0;
}
int fib(int num)
{
int n1=0,n2=1,nextTerm;
while(nextTerm<=num)
{
  nextTerm=n1+n2;
  if(num==nextTerm)
  {
    return 1;
  }
  n1=n2;
  n2=nextTerm;
}
 return -1;
}
