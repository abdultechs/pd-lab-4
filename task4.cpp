#include<iostream>
using namespace std;

void speedcheck(float speed); 

main () 
{
	float speed;
	speedcheck(speed);

}
void speedcheck(float speed)
{
	cout<<"Speed: ";
	cin >> speed;
	if ( speed <= 100 )
	{
	cout <<"Perfect! You're going good."<< endl;
	}
	if ( speed > 100 )
	{
	cout <<"Halt... YOU WILL BE CHALLENGED!!!"<< endl;
	}
}