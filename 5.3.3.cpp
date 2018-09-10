#include <iostream>
using namespace std;
int main ()
{
    int i,j;
    double a[3],b[3],c[3];
    for (i=0; i<3; i++)
    {
        cout<<"Dose a"<<endl;
        cin>>a[i];
        cout<<"Dose b"<<endl;
        cin>>b[i];
        c[i]=a[i]-b[i];
    }
    cout<<"a: ";
    for (j=0; j<3; j++)
        cout<<a[j]<<" ";
    cout<<endl;
    cout<<"b: ";
    for (j=0; j<3; j++)
        cout<<b[j]<<" ";
    cout<<endl;
    cout<<"c=a-b: ";
    for (j=0; j<3; j++)
        cout<<c[j]<<" ";
    cout<<endl;
}
