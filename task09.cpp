#include<iostream>
using namespace std;
void tpChecker(int people,int roll);
main()
{
	int people;
	int roll;
	cout << "Number of peoples in the household: ";
	cin >> people;
	cout << "Number of roll of TP: ";
	cin >> roll;
	tpChecker(people,roll);
}
void tpChecker(int people,int roll)
{
	int days;
	days=(roll*500)/(people*57);
if(days<14)
 {
	cout << "Your TP will last for " <<days<< ", buy more..!";
 }
if(days>=14)
 {
	cout << "Your TP will last for " <<days<< ", no need to panic..!";
 }



}
