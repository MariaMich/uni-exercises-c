#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main ()
{
double a,s,p;
int i,k;
a=0;
s=0;
p=1;
k=0;
cout <<"\n Dose arithmo epanalipseon";
cin>>i;
do
{
    cout<<"Dose arithmo a:";
    cin>>a;
    s=s+a;
    p=p+a;
    k++;
}
while (k<i);
cout<<"sum="<<s<<"p="<<p<<endl;
}
