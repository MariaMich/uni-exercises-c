#include <iostream>
using namespace std;
int main ()
{
double pa,da,sum;
cout<<"Dose proti vathmologia"<<endl;
cin>>pa;
cout<<"Dose deuteri vathmologia"<<endl;
cin>>da;
sum=pa*0.4+da*0.6;
cout<<"Teliki vathmologia "<<sum<<endl;
if (sum<5)
cout<<"Distixos kopikes "<<endl;
else
{
if (sum<6.5)
cout<<"Perases sto tsak "<<endl;
if (sum>6.5&&sum<8.5)
cout<<"Perases sto xalaro "<<endl;
if (sum>8.5&&sum<=10)
cout<<"Fito eisai leme! "<<endl;
}
}
