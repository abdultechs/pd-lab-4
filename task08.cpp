#include<iostream>
using namespace std;
void pet (int holidays);
main()
{
	int holidays;
	cout <<"Holidays: ";
	cin >> holidays;
	pet(holidays);	
}
void pet (int holidays)
{
	int wdays,timeforgame,diff,diffinminutes,diffinhours;
	wdays = 365-holidays;
	timeforgame=(holidays*127)+(wdays*63);
//this time is in minutes
	diff = 30000-timeforgame;
if(diff<=30000)
 { 
	diffinhours = diff/60;
	diffinminutes = diff%60;
	cout << "Tom sleeps well"<<endl;
	cout << diffinhours <<"hours and " <<diffinminutes << " minutes less for play ";

 }
if(diff>30000)
 { 
	diffinhours = -diff/60;
	diffinminutes = -diff%60;
	cout << "Tom will run away"<<endl;
	cout << diffinhours <<" hours and " <<diffinminutes << " minutes for play ";

 }


	

}