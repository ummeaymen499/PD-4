#include<iostream>
using namespace std;
void flowershop(int redRose,int whiteRose,int tulip);
main()
{
int redRose,whiteRose,tulip;
cout<<"Red Rose: ";
cin>>redRose;
cout<<"White Rose: ";
cin>>whiteRose;
cout<<"Tulips: ";
cin>>tulip;
flowershop(redRose,whiteRose,tulip);

}
void flowershop(int redRose,int whiteRose,int tulip)
{
float originalprice;
originalprice=redRose*2.00+whiteRose*4.10+tulip*2.50;
cout<<"Original Price: $"<<originalprice<<endl;
if(originalprice>200)
{
float discount;
discount=originalprice-originalprice*20/100;
cout<<"Price after Discount: $"<<discount<<endl;
}
else
{
cout<<"No discount applied.";
}
}