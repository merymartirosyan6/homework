#include <iostream>

int main()
{
    double a;
    double b;
    double c;
    std::cin>>a>>b>>c;
    if ((a<b && b<c) || (a>b && b>c)) {
        a*=2;
        b*=2;
        c*=2;
    }
    else {
        a-=2*a;
        b-=2*b;
        c-=2*c;
    }
    std::cout<<a<<' '<<b<<' '<<c<<std::endl;
    return 0;
}