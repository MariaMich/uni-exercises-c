#include <iostream>
using namespace std;
int grammi(int n,char x);
int main ()
{
    char ch;
    int mikos;
    cout<<"Dose xaraktira"<<endl;
    cin>>ch;
    cout<<"Dose mikos"<<endl;
    cin>>mikos;
    grammi(mikos,ch);
}
int grammi(int n,char x)
{
    int i;
    for (i=0; i<9; i++)
        cout<<x;
    cout<<endl;
}
