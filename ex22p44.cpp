#include <iostream>

int main()
{
    int n;
    std::cin>>n;
    if ((n%10)==(n/100)%10+3)
        std::cout<<'1'<<std::endl;
    else
        std::cout<<n*n<<std::endl;
    return 0;
}