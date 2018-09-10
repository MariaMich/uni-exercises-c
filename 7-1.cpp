#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main ()
{
string onoma;
int ilikia,k;
ifstream fin ("M.txt");
if (fin.fail())
{
cout<<"Sfalma\n";
return 1;
}
fin>>onoma>>ilikia;
string onomax;
cout<<"Poio onoma?";
cin>>onomax;
ofstream fout ("onomax");
string onomata=" ",strx="Alex";
while (!fin.eof())
{
k++;
cout<<k<<" : "<<onoma<<"\t"<<ilikia<<endl;
if (onoma==onomax)
fout <<onoma<<ilikia<<endl;
if (onoma.find(strx)!=-1)
onomata=onomata+onoma;
fin >>onoma>>ilikia;
}
fin.close();
cout<<" To "<<strx<<"periexoun oi"<<onomata<<endl;
}
