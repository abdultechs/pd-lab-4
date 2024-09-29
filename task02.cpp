#include<iostream>
using namespace std;

void reverse(string n);
main()
{
string n;
cout << "Enter either true or false:   ";
cin >> n;
reverse(n);

}

void reverse(string n) 
{
if (n == "true" || n == "TRUE")
{ cout << "false" ;}
if (n == "false" || n == "FALSE")
{ cout << "true";}



}