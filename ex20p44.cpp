#include <iostream>

int main()
{
    double x;
    double y;
    std::cin>>x>>y;
    if (x*x+y*y<=1 && x>=-1 && x<=0 && y>=-1 && y<=0)
        std::cout<<"YES"<<std::endl;
    else
        std::cout<<"NO"<<std::endl;
    return 0;
}