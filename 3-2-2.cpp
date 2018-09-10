#include <iostream>
using namespace std;
int main ()
{
    double varos,kostos;
    int apostasi;
    cout<<"Dose varos "<<endl;
    cin>>varos;
    if (varos<0.40)
        kostos=0.60;
    else
    {
        if (varos>=0.40&&varos<0.50)
        {
            cout<<"Dose apostasi "<<endl;
            cin>>apostasi;
            kostos=0.70+0.10*(apostasi/100);
        }
        else
            kostos=0.80+0.20*(apostasi/100);
    }
    cout<<"To kostos einai "<<kostos<<endl;
    return 0;
}
