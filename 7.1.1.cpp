#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main ()
{
    int k,i;
    double ilikia;
    char onoma[20];
    ifstream fin("420.txt");
    fin>>onoma>>ilikia;
    cout<<onoma<<" "<<ilikia<<endl;
    if (fin.fail())
    cout<<"Error sto arheio eisodou "<<endl;
    while (!fin.eof())
    {
        cout<<onoma<<""<<ilikia<<endl;
    }
    fin.close();
}
