#include <iostream>
#include<math.h>
using namespace std;
double power(double,int=2);
void display(int);

int main()
{
    int n,p,value;
    cout<<"enter base number and exponents "<<endl;
    cin>>n>>p;
   value= power(n,p);
   display(value);
   cout<<"\nwhen base value is 4 and no argument is passed for exponent\n";
   value=power(4);
   display(value);
    return 0;

}
double power(double n,int p)
{ int power=1;
for(int i=1;i<=p;i++)
    power*=n;
return power;
}
void display(int c)
{
    cout<<"result is: "<<c;
}
