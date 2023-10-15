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
int workingdays,hours,minutes;
workingdays=365-holidays;
float timeforgames;
timeforgames=workingdays*63+holidays*127;
int differencefromnorm;
differencefromnorm=30000-timeforgames;
if(differencefromnorm >= 0)
{
cout<<"Tom sleeps well"<<endl;
differencefromnorm=30000-timeforgames;
int hours,minutes;
hours=differencefromnorm/60;
minutes=differencefromnorm % 60;
cout<<hours<<" hours and "<<minutes<<" minutes less for play";
}
if(differencefromnorm<0)
{
cout<<"Tom will run away"<<endl;
differencefromnorm=timeforgames-30000;
int hours,minutes;
hours=differencefromnorm/60;
minutes=differencefromnorm % 60;
cout<<hours<<" hours and "<<minutes<<" minutes for play";
}
}