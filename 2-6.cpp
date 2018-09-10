#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
int a,b,c,diak;
double r1,r2,x,r;
setlocale(LC_ALL,"ell");
cout<<"Dose sintelestes trionimou "<<endl;
cin>>a>>b>>c;
diak=(b*b)-(4*a*c);
r=(-b)/(2*a);
x=(sqrt(-diak))/(2*a);
if (diak<0)
cout <<"Migadikes r1="<<r<<" -i"<<x<<" r2="<<r<<" +i "<<endl;
else
{
r1=(-b+sqrt(diak))/(2*a);
r2=(-b-sqrt(diak))/(2*a);
cout <<"riza1="<<r1<<" riza2="<<r2<<endl;
}
return 0;
}
