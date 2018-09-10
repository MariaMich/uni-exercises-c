#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main ()
{
    int i;
    double n,s,k,p,m,s2;
    cout<<"Dose n";
    cin>>n;
    cout<<"Dose p";
    cin>>p;
    m=0;
    for (k=0; k<=n; k=k+2)
    {
        s=s+k;
    }
    cout<<"Sum="<<s<<endl;
    for (m=0; m<p; m=m+1)
    {
        s2=s2+m/(m+3);
    }
    cout<<"s2="<<s2<<endl;
}
