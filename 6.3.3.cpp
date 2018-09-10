#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
string a,b;
cout<<"Dose simboloseira a"<<endl;
cin>>a;
cout<<"Dose simboloseira b"<<endl;
cin>>b;
if (a==b)
cout<<"Idies lexikografika"<<endl;
if (a>b)
cout<<"H a megaliteri tis b lexikografika"<<endl;
if (a<b)
cout<<"H a mikroteri tis b lexikografika"<<endl;
a=a+b;
cout<<"H kainouria sumboloseira einai "<<a<<endl;
}
