#include<iostream>
using namespace std;
void tpChecker(int people,int roll);
main()
{
int people,roll;
cout<<"Number of people in the household: ";
cin>>people;
cout<<"Number of rolls of TP: ";
cin>>roll;
tpChecker(people,roll);
}
void tpChecker(int people,int roll)
{
int singlepersonsheets;
int no_of_rolls ;
no_of_rolls=roll*500;
singlepersonsheets=no_of_rolls/people;
int dayservive;
dayservive=singlepersonsheets/57;
if(dayservive>=14)
{
cout<<"Your TP will last "<<dayservive<<" days, no need to panic!";
}
else
{
cout<<"Your TP will only last "<<dayservive<<" days, buy more!";
}

}
