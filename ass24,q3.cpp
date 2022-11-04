//3. Define a function to calculate x raised to the power y.
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int x,y,z;
cout<<"Enter a number"<<endl;
cin>>x>>y;
z=pow(x,y);
cout<<"The power of "<<x<<" to the power "<<y<<" is "<<z<<endl;

return 0;
}
int pow(int x,int y)
{
 int z;
 z=pow(x,y);
 return z;
}
