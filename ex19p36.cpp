#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cin>>a>>b>>c;
    double p=a+b+c;
    cout<<"P="<<p<<endl;
    double s=sqrt((p/2)*(p/2-a)*(p/2-b)*(p/2-c));
    cout<<"S="<<s<<endl;
    double sina=(2*s)/(b*c);
    double sinb=(2*s)/(a*c);
    double sinc=(2*s)/(a*b);
    cout<<sina<<' '<<sinb<<' '<<sinc<<endl;
    double cosa=sqrt(1-sina*sina);
    double cosb=sqrt(1-sinb*sinb);
    double cosc=sqrt(1-sinc*sinc);
    cout<<cosa<<' '<<cosb<<' '<<cosc<<endl;
    double h1=2*s/a;
    double h2=2*s/b;
    double h3=2*s/c;
    cout<<h1<<' '<<h2<<' '<<h3<<endl;
    return 0;
}