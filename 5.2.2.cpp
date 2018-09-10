#include <iostream>
#include <iomanip>
#define S 5
#define M 3
#include <cstdlib>
using namespace std;
int main ()
{
    int i,j,k,g;
    double b[S][M];
    b[S][M]=rand()%11;
    /*for (i=1; i<=M; i++)
    {
        cout<<"Dose vathmologia sto "<<i<<" mathima"<<endl;
        for (j=0; j<S; j++)
        {
            cin>>b[S][M];
        }
    } */
    for (k=0; k<S; k++)
    {

        for (g=0; g<M; g++)
        {
            cout<<setw(6)<<b[k][g]<<" ";
        }
        cout<<endl;
    }
    int p1,p2,r1,r2,l,t;
    p1=p2=r1=r2=0;
    for (t=0;t<M;t++)
    {
    for (l=0;l<S;l++)
    {
        if (b[l][M]<5)
        r1++;
        else if (b[l][M]>=5)
        p1++;
        else if (b[l][M]>=8.5&&b[l][M]<=10)
        p2++;
        else if (b[l][M]==0)
        r2++;
    }
    }
cout <<"r1= "<<r1<<endl<<"r2= "<<r2<<endl<<"p1= "<<p1<<endl<<"p2= "<<p2<<endl;
}
