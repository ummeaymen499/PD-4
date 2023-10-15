#include<iostream>
using namespace std;
void longestduration(int h, int m);
main()
{
int h,m;
cout<<"Enter the number of hours: ";
cin>>h;
cout<<"Enter the number of minutes: ";
cin>>m;
longestduration(h, m);
}
void longestduration(int h, int m)
{
int cal;
cal = h * 60;
if(cal>m)
{
  cout<<""<<h<<endl;
}
else
{
 cout<<""<<m<<endl;
}



}
