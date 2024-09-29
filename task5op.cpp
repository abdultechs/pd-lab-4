#include<iostream>
#include<windows.h>
using namespace std;
void name();
void gotoxy(int x, int y);

main()
{
system("cls");
name();




}

void name()
{
int x=74, y=23;
gotoxy(x,y);
cout << "   ###   ###   ####   #   #  #     #       ###    #   #        " << endl;
gotoxy(x,y=y+1);
cout << "  #   #  #  #  #   #  #   #  #     #      #   #   #   #      " << endl;
gotoxy(x,y=y+1);
cout << "  #####  ###   #   #  #   #  #     #      #####   #####       " << endl;
gotoxy(x,y=y+1);
cout << "  #   #  #  #  #   #  #   #  #     #      #   #   #   #       " << endl;
gotoxy(x,y=y+1);
cout << "  #   #  ###   ####   #####  ##### #####  #   #   #   #         " << endl;







}


void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
