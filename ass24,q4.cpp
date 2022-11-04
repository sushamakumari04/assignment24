//4. Define a function to print Pascal Triangle up to N lines.
#include<iostream>
using namespace std;
int pascalTriangle(int);
int fact(int);
int pT(int,int);
int main()
{
int n,p;
cout<<"Enter the number of lines"<<endl;
cin>>n;
p=pascalTriangle(n);
return 0;
}
int pascalTriangle(int n)
{
int i,j;
for(i=0;i<n;i++)
{
 for(j=0;j<=i;j++)
 {
  cout<<pT(i,j)<<" ";
 }
 cout<<endl;
}
}
int pT(int N,int R)
{
 return fact(N)/(fact(N-R)*fact(R));
}
int fact(int num)
{
 if(num==1||num==0)
    return 1;
 return fact(num-1);
}
