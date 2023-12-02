#include <iostream>

int main()
{
    double a;
    double b;
    double c;
    std::cin>>a>>b>>c;
    double d=b-a;
    double e=c-a;
    if (d<0)
        d-=2*d;
    if (e<0)
        e-=2*e;
    if (d<e)
        std::cout<<b<<' '<<d<<std::endl;
    else
        std::cout<<c<<' '<<e<<std::endl;
    return 0;
}