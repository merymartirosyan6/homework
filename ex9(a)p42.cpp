#include <iostream>

int main()
{
    int a;
    int b;
    int c;
    std::cin>>a>>b>>c;
    if (a==b && b==c)
        std::cout<<"YES"<<std::endl;
    else
        std::cout<<"NO"<<std::endl;
    return 0;
}