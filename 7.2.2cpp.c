#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
int n,i;
char onoma;
double ilikia;
cout<<"Dose arithmo eggrafon"<<endl;
cin>>n;
for (i=0;i<n;i++)
{
ofstream f("6971.txt")
cout<<"Dose onoma kai ilikia"<<endl;
cin>>onoma>>ilikia;
f<<onoma<<" "<<ilikia<<endl;
}
}
