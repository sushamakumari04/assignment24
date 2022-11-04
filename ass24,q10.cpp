//10. Write functions using function overloading to add two numbers having different data types.
#include<iostream>
using namespace std;

 int add(int ,int);
 float add(float,float);

int main()
{
    int a,b;
    float m,n;
    cout<<"enter two number"<<endl;
    cin>>a>>b;
    cout<<"the sum is "<<add(a,b);
    cout<<"enter two number"<<endl;
    cin>>m>>n;
    cout<<"the sum is "<<add(m,n);
return 0;
}
int add(int a,int b)
{
 return (a+b);
}
float add(float m,float n)
{
 return (m+n);
}
