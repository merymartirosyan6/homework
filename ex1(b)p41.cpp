#include <iostream>

int main()
{
    int a;
    int b;
    std::cin>>a>>b;
    if (a%2==1 || b%2==1)
        std::cout<<"YES"<<std::endl;
    else
        std::cout<<"NO"<<std::endl;
    return 0;
}