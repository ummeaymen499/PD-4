#include<iostream>
using namespace std;
void priceafterdiscount(string name,float ticketprice);

main()
{
string name;
float ticketprice;
cout<<"Enter the country's name: ";
cin>>name;
cout<<"Enter the ticket price in dollars: $";
cin>>ticketprice;
priceafterdiscount(name,ticketprice);



}
void priceafterdiscount(string name,float ticketprice)
{
float priceafterdiscount;
if(name=="Pakistan")
   {
    priceafterdiscount=ticketprice-ticketprice*5/100;
    cout<<"Final ticket price after discount: $"<<priceafterdiscount<<endl;
    }
if(name=="India")
    {
    priceafterdiscount=ticketprice-ticketprice*20/100;
    cout<<"Final ticket price after discount: $"<<priceafterdiscount<<endl;
    }
if(name=="Ireland")
 {
    priceafterdiscount=ticketprice-ticketprice*10/100;
    cout<<"Final ticket price after discount: $"<<priceafterdiscount<<endl;
    }
if(name=="Canada")
 {
    priceafterdiscount=ticketprice-ticketprice*45/100;
    cout<<"Final ticket price after discount: $"<<priceafterdiscount<<endl;
    }
if(name=="England")
 {
    priceafterdiscount=ticketprice-ticketprice*30/100;
    cout<<"Final ticket price after discount: $"<<priceafterdiscount<<endl;
    }
}
