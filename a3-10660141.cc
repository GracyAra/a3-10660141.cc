
#include<iostream>
using namespace std;

int main()
{
int mark;

cout<<"Enter student's mark:"<<endl;
cin>>mark;
if(mark>=80)
{
cout<<"A"<<endl;
}
else if (mark<=70 && mark>=79)
{
cout<<"B"<<endl;
}
else if (mark<=60 && mark>=69)
{
cout<<"C"<<endl;
}
else if (mark<=50 && mark>=59)
{
cout<<"D"<<endl;
}
else if (mark<=40 && mark>=45)
{
cout<<"E"<<endl;
}
else if (mark<45)
{
cout<<"F"<<endl;
}

cout<<"\n"<<endl;

return 0;

}
