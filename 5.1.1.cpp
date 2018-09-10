#include <iostream>
using namespace std;
int main ()
{
    int i,j,psifia,min,max,mo;
    float a[4];
    min=10;
    max=0;
    mo=0;
    for (i=0; i<4; i++)
    {
        cout<<"Dose timi pinaka"<<endl;
        cin>>a[i];
    }
    for (i=0; i<4; i++)
    {
        cout<<"To stoixeio tou pinaka exei timi "<<a[i]<<endl;
    }
    for (i=0; i<4; i++)
    {
        if (a[i]<min)
            min=a[i];
        else if (a[i]>max)
            max=a[i];
        else if (a[i]>5)
        {
            mo=mo+a[i];
            psifia++;
        }
    }
    mo=mo/psifia;
    cout<<"O mesos oros twn psifiwn pano tou 5 einai "<<mo<<endl;
    cout<<"To max einai "<<max<<endl;
    cout<<"To min einai "<<min<<endl;
    cout<<"To max einai stin thesi "<<&max<<endl;
}
