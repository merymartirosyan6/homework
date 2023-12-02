#include <iostream>

int main()
{
    int a;
    int b;
    int c;
    std::cin>>a>>b>>c;
    if (c*c==a*a+b*b || a*a==c*c+b*b || b*b==c*c+a*a)
        std::cout<<"YES"<<std::endl;
    else
        std::cout<<"NO"<<std::endl;
    return 0;
}