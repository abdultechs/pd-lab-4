#include<iostream>
using namespace std;
void possibleBonus(int p1, int p2);
main()
{
int p1, p2;
cout <<"enter your position:   ";
cin >> p1;
cout <<"enter your friend's position:    ";
cin >> p2;
possibleBonus(p1,p2);
}
void possibleBonus(int p1, int p2)
{
int n;
n = p2-p1;
if (n<=6)
{ cout << "true";}
if (n>6)
{ cout << "false";}

}

