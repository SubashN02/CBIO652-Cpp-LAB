#include <iostream>
#include<math.h>
using namespace std;
int power(int a,int b);
int main()
{
    int a,b,c;
cout<<"Enter 2 numbers"<<"\n";
cin>>a>>b;
c=power(a,b);
cout<<a<<" to the power of "<<b<<" is : "<<c;
    return 0;
}
int power(int a,int b)
{
    int c;
    c=pow(a,b);
    return c;
}
