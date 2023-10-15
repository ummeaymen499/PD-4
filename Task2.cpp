#include<iostream>
using namespace std;
void equalornot(string op);

main()
{
string op;
cout<<"Enter 'true' or 'false': ";
cin>>op;
equalornot(op);



}
void equalornot(string op)

{
if(op=="true")
    {
     cout<<"false";

    }
else
    { 

     cout<<"true";

    }
}