#include <iostream>
#include<math.h>
using namespace std;
double power(double,int=2);
void display(int);
int main()
{
  int m,n,value;
   cout<<"enter base number and exponents "<<endl;
   cin>>m>>n;
   value= power(m,n);
   display(value);
   cout<<"\nwhen base value is 4 and no argument is passed for exponent\n";
   value=power(4);
   display(value);
    return 0;
}
double power(double m,int n)
{ int power=1;
for(int i=1;i<=n;i++)
    power*=m;
return power;
}
void display(int c)
{
    cout<<"result is: "<<c;
}
