#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
double b[3][3]={{1.2, 3.7 ,0.5 },
{4.6 ,8.3 ,7.2 },
{2.1, 1.5 ,6.4}
};
int i,j;
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
cout<<setw(6)<<b[i][j];
}
cout<<endl;
}
}
