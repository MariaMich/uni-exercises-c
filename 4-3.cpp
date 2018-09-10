#include <iostream>
using namespace std;
int main()
{
int pin,k,PIN;
PIN=5678;
k=0;
do
{
cout<<"Dose pin";
cin>>pin;
k++;
}
while(pin!=PIN&&k<=3);
if (pin=PIN)
cout<<"Bravo to vrikes se "<<k<<" prospatheies";
else
cout<<"Dystyxos den to vrikes";
}
