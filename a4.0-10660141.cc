#include<iostream>
using namespace std;
int main()

{

int x,y;
cout<<"ENTER FIRST NUMBER:";
cin>>x;
cout<<"ENTER SECOND NUMBER:";
cin>>y;
int xy=min(x,y);
int GCD=1;
for (int i=1;i<=xy;i++)
{

if(x%i==0 && y%i==0)
{
GCD= max(GCD,i);
  }
}

  cout<<"GCD is:"<<GCD;

   return 0;
}
