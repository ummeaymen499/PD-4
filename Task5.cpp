#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y)
{  
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void printa()
{

cout<<"        ####             "<<endl;
cout<<"     ###    ###          "<<endl;
cout<<"     ##      ##          "<<endl;
cout<<"     ##########          "<<endl;
cout<<"     ##      ##          "<<endl;
cout<<"     ##      ##          "<<endl;
cout<<"     ##      ##          "<<endl;
}
void printy()
{

cout<<"                    ###      ###        "<<endl;
cout<<"                     ###    ###         "<<endl;
cout<<"                       ##  ##           "<<endl;
cout<<"                        ####            "<<endl;
cout<<"                         ##             "<<endl;
cout<<"                         ##             "<<endl;
cout<<"                         ##             "<<endl;
}
void printm()
{
cout<<"         ####     ####         "<<endl;
cout<<"         ##  #   #  ##         "<<endl;
cout<<"         ##   # #   ##         "<<endl;
cout<<"         ##    #    ##         "<<endl;
cout<<"         ##         ##         "<<endl;
cout<<"         ##         ##         "<<endl;
cout<<"         ##         ##         "<<endl;
}
void printe()
{
cout<<"       #######          "<<endl;
cout<<"       ##               "<<endl;
cout<<"       ##               "<<endl;
cout<<"       #######          "<<endl;
cout<<"       ##               "<<endl;
cout<<"       ##               "<<endl;
cout<<"       #######          "<<endl;
}
void printn()
{
cout<<"     ####      ###       "<<endl;
cout<<"     ## ##      ##       "<<endl;
cout<<"     ##   #     ##       "<<endl;
cout<<"     ##    #    ##       "<<endl;
cout<<"     ##     #   ##       "<<endl;
cout<<"     ##      #  ##       "<<endl;
cout<<"     ##       ####       "<<endl;
}










}
main()
{
system("cls");
gotoxy(4,4);
printa();
printy();
printm();
printe();
printn();
}
