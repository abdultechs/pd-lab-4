#include<iostream>
using namespace std;
void flowerShop(int redRose, int whiteRose, int tulip);
main ()
{
	int redRose,whiteRose,tulip;
	cout << "Enter the number of red rose:  ";
	cin >> redRose;
	cout << "Enter the number of white rose:  ";
	cin >> whiteRose;
	cout << "Enter the number of tulip:  ";
	cin >> tulip;
	flowerShop(redRose,whiteRose,tulip);
	
}
void flowerShop(int redRose, int whiteRose, int tulip)
{
	
	float price, disc;
	price = (redRose*2)+(whiteRose*4.10)+(tulip*2.5);
if(price>200)
{
	cout << "orignal price: " <<price;
	disc = price*0.2;
	price = price-disc;
	cout << "Price after Discount: " <<price; 	
}
else 
{
	cout << "price is: " << price <<endl<<"NO Discount applied..";
}

}	