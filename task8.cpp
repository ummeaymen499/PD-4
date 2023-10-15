#include<iostream>
using namespace std;
void pet(int holidays);
main()
{
int holidays;
cout<<"Holidays: ";
cin>>holidays;
pet(holidays);

}
void pet(int holidays)
{
int workingdays;
workingdays=365-holidays;
float timeforgames;
timeforgames=workingdays*63+holidays*127;
int differencefromnorm;
differencefromnorm=30000-timeforgames;
int hours;
hours=differencefromnorm/60;
int minutes;
minutes=differencefromnorm % 60;
if(differencefromnorm <= 30000)
{
   {
cout<<"Tom sleeps well"<<endl;
   }
if(hours<0)
  {
cout<< hours << " hours and ";
  }
else
  {
cout<< hours << " hours and ";
  }
if(minutes<0)
  {
cout<<minutes<<" minutes less for play";
  }
else
  {
cout<<minutes<<" minutes less for play";
  }
}
else
{
   {
cout<<"Tom will run away"<<endl;
   }
if(hours<0)
   {
cout<< hours << " hours and ";
   }
else
   {
cout<< hours << " hours and ";
   }
if(minutes<0)
   {
 cout<<minutes<<" minutes for play";
   }
else
  {
 cout<<minutes<<" minutes for play";
  }
}
}