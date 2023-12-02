#include <iostream>

int main()
{
    int a;
    int b;
    std::cin>>a>>b;
    if ((a+b)%2==0)
        std::cout<<"YES"<<std::endl;
    else
        std::cout<<"NO"<<std::endl;
    return 0;
}