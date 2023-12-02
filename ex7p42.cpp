#include <iostream>

int main()
{
    int x, y;
    int x1, y1;
    int x2, y2;
    std::cin>>x>>y>>x1>>y1>>x2>>y2;
    if (x>x1 && x<x2 && y>y2 && y<y1)
        std::cout<<"YES"<<std::endl;
    else
        std::cout<<"NO"<<std::endl;
    return 0;
}