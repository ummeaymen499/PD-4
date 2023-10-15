#include<iostream>
using namespace std;
void equalornot(int num1,int num2)
{
if(num1==num2)
    {
     cout<<"true";

    }
else
    { 

     cout<<"false";

    }

}
main()
{
int num1,num2;
cout<<"Enter the first number: ";
cin>>num1;
cout<<"Enter the second number: ";
cin>>num2;
equalornot(num1,num2);



}