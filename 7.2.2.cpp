#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
int n,i;
string onoma;
double ilikia;
cout<<"Dose arithmo eggrafon"<<endl;
cin>>n;
ofstream f("6971.txt",ios::app);
for (i=0;i<n;i++)
{
cout<<"Dose onoma"<<endl;
cin>>onoma;
cout<<"Dose ilikia"<<endl;
cin>>ilikia;
f<<onoma<<" "<<ilikia<<endl;
}
f.close();
}
