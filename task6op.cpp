#include<iostream>
#include<windows.h>
using namespace std;
void printH();
void printA();
void printS();
void printN();
void gotoxy(int x, int y);

main()
{
printH();
printA();
printS();
printS();
printA();
printN();



}


void printH()
{
cout << " #   #     "<<endl;
cout << " #   #    "<<endl;
cout << " #####       "<<endl;
cout << " #   #    "<<endl;
cout << " #   #    "<<endl;
cout << "        " <<endl;


}

void printA()
{
cout << " #####     "  <<endl;
cout << " #   #   "  <<endl;
cout << " #####     "  <<endl;
cout << " #   #  "  <<endl;
cout << " #   #  "  <<endl;
cout << "        " <<endl;


}

void printS()
{
cout << " ######        " <<endl; 
cout << " #        " <<endl; 
cout << " ######        " <<endl; 
cout << "      #   " <<endl; 
cout << " ######   " <<endl; 
cout << "        " <<endl; 



}

void printN()
{
cout << " ##    #   " << endl;
cout << " # #   #  " << endl;
cout << " #  #  #  " << endl;
cout << " #   # #  " << endl;
cout << " #    ##  " << endl;
cout << "        " <<endl;




}



void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
