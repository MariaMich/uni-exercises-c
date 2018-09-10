#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    int mikos,i,j;
char s[20],ch1;
cout<<"Dose simboloseira "<<endl;
cin>>s;
mikos=strlen(s);
cout<<"To mikos tis simboloseiras einai "<<mikos<<endl;
cout<<"Dose xaraktira "<<endl;
cin>>ch1;
for (i=0;i<20;i++)
{
    if (s[i]==ch1)
    cout<<"O xaraktiras vrisketai stin thesi "<<i<<endl;
    if (isdigit(s[i]))
    s[i]='@';

}
cout<<"H kainouria simboloseira einai "<<s<<endl;
}
