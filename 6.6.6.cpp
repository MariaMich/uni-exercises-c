#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    int k,N,i;
    cout<<"Dose pose onomata theleis na exei o pinakas"<<endl;
    cin>>N;
    string onomata[N],a,j;
    for (i=0;i<N;i++)
    {
    cout<<"Dose onomata gia ton pinaka"<<endl;
    cin>>onomata[i];
    }
    cout<<"Dose simboloseira a"<<endl;
    cin>>a;
    for (i=0;i<N;i++)
    {
        k=onomata[i].find(a);
        if (k!=-1)
        j=onomata[i];
    }

    if (k==-1)
        cout<<"H simboloseira den yparxei sta onomata"<<endl;
    else
        cout<<"H simboloseira yparxei sto onoma "<<j<<" stin thesi "<<k<<endl;
}
