#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b;
    cin>>a>>b;
    double p=2*(a+b);
    double s=a*b;
    double d=sqrt(a*a+b*b);
    cout<<p<<' '<<s<<' '<<d<<endl;
    return 0;
}