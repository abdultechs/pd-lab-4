#include<iostream>
using namespace std;
void compare(float n1, float n2);
main()
{

float n1,n2;
cout << "enter number 1:   ";
cin>> n1;
cout << "enter number 2:   ";
cin>> n2;
compare (n1, n2);
}

void compare(float n1, float n2)
{
if (n1 == n2)
{ cout << "true";}
else
{ cout << "false" ;}


}

