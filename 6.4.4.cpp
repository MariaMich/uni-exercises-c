#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
string a,b,c;
cout<<"Dose simboloseira a"<<endl;
cin>>a;
cout<<"Dose simboloseira b"<<endl;
cin>>b;
if (a>b)
cout<<"H simboloseira a megaliteri lexikografika apo tin b"<<endl;
else if (b>a)
cout<<"H simboloseira b megaliteri lexikografika apo tin a "<<endl;
else if (b==a)
cout<<"H symboleiseira a kai b einai ises lexikografika"<<endl;
c=a+" "+b;
cout<<"H symboloseira c einai "<<c<<endl;
}
