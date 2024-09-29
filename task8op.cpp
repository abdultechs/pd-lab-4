#include<iostream>
#include<windows.h>
using namespace std;

void printMenu();
void calculateAggregate(string name,float matricMarks,float interMarks,float ecatMarks);
void compareMarks(string name,float ecatMarks,string name2,float ecatMarks2);

main()
{

printMenu();

string name,name2;
float matricMarks, interMarks , ecatMarks,ecatMarks2;
cout << "Name:  ";
cin  >> name;
cout << "matric marks: ";
cin  >> matricMarks;
cout << "intermediate marks: ";
cin  >> interMarks;
cout << "ecat marks: ";
cin  >> ecatMarks;
calculateAggregate(name, matricMarks, interMarks, ecatMarks);


cout << "Name of 2nd student:  ";
cin  >> name2;
cout << "matric marks: ";
cin  >> matricMarks;
cout << "intermediate marks: ";
cin  >> interMarks;
cout << "ecat marks: ";
cin  >> ecatMarks2;
calculateAggregate(name2, matricMarks, interMarks, ecatMarks2);

compareMarks(name, ecatMarks,name2,ecatMarks2);

}

void printMenu()
{
cout << " ______UNIVERSITY***OF***ENGINEERING***AND***TECHNOLOGY_______                               "<<endl;
cout << "      ____________ECAT***MERIT***CALCULATOR______________                                      "<<endl;
cout << "               ____Desined***by***ABDULLAH_________                        "<<endl;

}

void calculateAggregate(string name,float matricMarks,float interMarks,float ecatMarks)
{



float aggregate;

aggregate = (matricMarks/1100*30)+(interMarks/550*30)+(ecatMarks/400*40);
cout    << "hey.. " << name<< " your aggragate is: "<< aggregate<<endl;





}

void compareMarks(string name,float ecatMarks,string name2,float ecatMarks2)

{
if (ecatMarks > ecatMarks2)
     {  cout << name << " has roll no 1"; }

if (ecatMarks < ecatMarks2)
     {  cout << name2 << " has roll no 1"; }






}






