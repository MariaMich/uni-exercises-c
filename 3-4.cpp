#include <iostream>
using namespace std;
int main()
{
int xr;
cout<<"Dose xronia"<<endl;
cin>>xr;
if(xr%400==0)
{
cout<<"Disekto ara 366."<<xr<<endl;
}
else
{
cout<<"Kanoniko ara 365."<<xr<<endl;
}
return 0;
}
