#include<iostream>
using namespace std;

void pascalTriangle(int);
int fact(int);
int combi(int ,int);
int main()
{
int lines;
cout<<"enter the number lines"<<endl;
cin>>lines;
pascalTriangle(lines);
return 0;
}

int fact(int n)
{
 int f=1;
  while(n>=1)
    {
      f=f*n;
      n--;
    }
  return (f);
}
int combi(int n,int r)
{
 return fact(n)/fact(n-r)/fact(r);
}
void pascalTriangle(int lines)
{
   int i,j,k,r;
   for(int i=1;i<=lines;i++)
    {
     k=1;
     r=0;
     for(j=1;j<=2*lines-1;j++)
     {
       if(j>=lines+1-i&&j<=lines-1+i&&k)
        {
         cout<<combi(i-1,r);
         k=0;
         r++;
        }
      else{
         cout<<"  ";
         k=1;
         }
     }
     cout<<endl;
    }
}
