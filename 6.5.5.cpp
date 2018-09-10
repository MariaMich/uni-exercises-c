#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    int k;
    string a;
    cout<<"Dose simboloseira a"<<endl;
    cin>>a;
    k=a.find("eta");
    if (k==-1)
        cout<<"Den yparxei h simboloseira eta"<<endl;
    else
        cout<<"H simboloseira yparxei stin thesi "<<k<<endl;
    int g,N,i;
    char onomata[N][30],h;
    for (i=0;i<3;i++)
    {
        cout<<"Dose onoma"<<i<<" gia ton pinaka"<<endl;
    cin>>onomata[i][30];
    }

    cout<<"Dose simboloseira h"<<endl;
    cin>>h;
    g=onomata[N][30].find(h);
    if (g==-1)
        cout<<"H simboloseira den yparxei sta onomata"<<endl;
    else
        cout<<"H simboloseira yparxei stin thesi "<<g<<endl;
}
