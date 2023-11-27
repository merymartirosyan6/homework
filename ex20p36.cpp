#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b;
    cin>>a>>b;
    double c=sqrt(a*a+b*b);
    cout<<"C="<<c<<endl;
    double s=a*b/2;
    cout<<"S="<<s<<endl;
    return 0;
}