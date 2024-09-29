#include<iostream>
using namespace std;
void discount (string country_name ,float price );
main()
{
string country_name;
float price;

cout << "Enter your country name[pakistan, ireland, england, canada, india]       ";
cin >> country_name;
cout << "Enter ticket price:    $";
cin >> price ;
discount (country_name , price );



}

void discount (string country_name ,float price )
{
float disc;
if (country_name == "pakistan" )
{ 
disc = price*0.05 ;
price = price-disc;
cout << "price after discount is " << price;
}

if (country_name == "ireland" )
{ 
disc = price*0.1 ;
price = price-disc;
cout << "price after discount is " << price;
}

if (country_name == "england" )
{ 
disc = price*0.3 ;
price = price-disc;
cout << "price after discount is " << price;
}

if (country_name == "canada" )
{ 
disc = price*0.4 ;
price = price-disc;
cout << "price after discount is " << price;
}

if (country_name == "india" )
{ 
disc = price*0.2 ;
price = price-disc;
cout << "price after discount is " << price;
}





}