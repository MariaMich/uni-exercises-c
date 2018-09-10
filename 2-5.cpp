#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
int a,b,c,diak;
double r1,r2,r;
setlocale(LC_ALL,"ell");
cout <<"Dose sintelestes trionimou "<<endl;
cin >>a>>b>>c;
diak=b*b-(4*a*c);
if (diak<0)
cout <<"Migadikes"<<endl;
else
{
    if (diak=0)
    r=(-b)/(2*a);
    else
    {
r1=(-b+sqrt(diak)/(2*a);
r2=(-b-sqrt(diak)/(2*a);
cout <<"riza 1="<<r1<<"riza 2="<<r2<<endl;
    }
}
return 0;
}
