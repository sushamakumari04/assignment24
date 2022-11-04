//8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle.
#include<iostream>
using namespace std;
float Area(float);
int Area(float,float);
float Area(int,int);
int main()
{
int ba,ht;
float r,l,b;
cout<<"Enter the radius of Circle"<<endl;
cin>>r;
cout<<"area of circle is "<<Area(r)<<endl;
cout<<"Enter the length and breadth of rectangle"<<endl;
cin>>l>>b;
cout<<"area of rectangle is "<<Area(l,b)<<endl;
cout<<"Enter the height and base of triangle"<<endl;
cin>>ht>>ba;
cout<<"area of triangle is "<<Area(ht,ba)<<endl;
return 0;
}
float Area(float r)
{
 return (3.14*r*r);
}
int Area(float l,float b)
{
 return (l*b);
}
float Area(int h ,int b)
{
 return (0.5*h*b);
}
