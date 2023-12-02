#include <iostream>

int main()
{
    int r;
    int x, y;
    std::cin>>r>>x>>y;
    if (x*x+y*y<r*r)
        std::cout<<"YES"<<std::endl;
    else
        std::cout<<"NO"<<std::endl;
    return 0;
}