#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main ()
{
    int k;
    char ch1,ch2,ch3,j;
    do
    {
        cout<<"Dose xaraktira"<<endl;
        cin>>ch1;
        cout<<"O xaraktiras einai "<<ch1<<" O kodikos ASCII einai "<< int (ch1)<<endl;
    }
    while (ch1!='@');
    cout<<"Dose kodiko ASCII"<<endl;
    cin>>k;
    cout<<"O kodikos ASCII einai "<<k<<" O xaraktiras einai  "<<char (k)<<endl;
    cout<<"Dose deutero xaraktira "<<endl;
    cin>>ch2;
    cout<<"O amesos epomenos xaraktiras einai "<<char (int ((ch2)+1))<<endl;
    cout<<"Dose trito xaraktira "<<endl;
    cin>>ch3;
    j=toupper(ch3);
    cout<<"To antistoixo kefalaio einai "<<j<<endl;
}
