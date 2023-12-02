#include <iostream>

int main()
{
    int a1, b1, c1;
    int a2, b2, c2;
    std::cin>>a1>>b1>>c1>>a2>>b2>>c2;
    if (a1==a2 && b1==b2 && c1==c2)
        std::cout<<"YES"<<std::endl;
    else
        std::cout<<"NO"<<std::endl;
    return 0;
}