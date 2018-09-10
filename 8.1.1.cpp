#include <iostream>
using namespace std;
int paragontiko(double n);
int main ()
{

    int n,r;
    cout<<"Dose n"<<endl;
    cin>>n;
    cout<<"Dose r"<<endl;
    cin>>r;
    cout<<"To n!= "<<paragontiko(n)<<endl;
    cout<<"To r!= "<<paragontiko(r)<<endl;
}
int paragontiko(double n)
{
    int i,p=1;
    for (i=1;i<=n;i++)

    {
        p=(p*i);

    }
}

