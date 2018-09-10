#include <iostream>
using namespace std;
int grammi(int n,char ch);
int main ()
{
grammi(10,'*');
grammi(8,'8');
int mikos;
char ch;
cout<<"Pose megali grammi?";
cin>>mikos;
cout<<"Me poion haraktira";
cin>>ch;
grammi(mikos,ch);
}
int grammi (int n,char ch)
{
int i;
for (i=1;i<=n;i++)
cout<<ch;
cout<<endl;
}

