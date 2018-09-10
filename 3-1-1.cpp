#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main ()
{
int vm,arp,km,foros,sinolo;
cout<<"Dose vasiko mistho"<<endl;
cin>>vm;
cout<<"Dose arithmo paidion"<<endl;
cin>>arp;
if (arp<=2)
{
km=arp*15+vm;
sinolo=km-km/20;
}
else if (arp>2&&arp<=5)
{
km=(arp-2)*25+30+vm;
sinolo=km-km/20;
}
else if (arp>5)
km=arp*40;
sinolo=km;
cout<<"O katharos misthos einai "<<sinolo<<endl;
return 0;
}
