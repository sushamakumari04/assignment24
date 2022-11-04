//2.Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int hightestNum(int);
int main()
{
int x,h;
cout<<"Enter a number"<<endl;
cin>>x;
h=hightestNum(x);
cout<<"highest digit is "<<h<<" in the number"<<x<<endl;


return 0;
}
int hightestNum(int x)
{
 int digit,highest=0;
 while(x>0)
{
 digit=x%10;
 if(digit>highest)
 {
  highest=digit;
 }
 x=x/10;
}
return highest;
}
