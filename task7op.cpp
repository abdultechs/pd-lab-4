#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
void printMaze();
void playerMove(int x, int y);

main()
{
	int x=3,y=1;
	system("cls");
	printMaze();
while(1)
    {
	playerMove(x,y);
	y = y+1;
	if(y==8)
	{
	   while(1)
	   {
	    playerMove(x,y);
	    y=y-1;
	     if(y==2)
		{break;}
	   }
	}
    }
	
      	
	
}

void playerMove(int x, int y)

{
	
	gotoxy(x,y);
	cout<< "p";
	Sleep(200);
	gotoxy(x,y);
	cout<< " ";


}


void printMaze()
{
    cout << "#######################" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#######################" << endl;
}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
