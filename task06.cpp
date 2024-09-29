#include<iostream>
using namespace std;
void longestTime(int h, int m);
main()
{
	int h,m;
	cout << "enter hours: ";
	cin >> h; 
	cout << "enter minutes: ";
	cin >> m;
	longestTime(h, m);
}
void longestTime(int h, int m)
{
	int n=h*60;
if(n>m)
{
	cout << h;
}
if(m>n)
{
	cout << m;
}
}	