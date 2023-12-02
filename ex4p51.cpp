#include <iostream>

int main()
{
    int n;
    std::cin>>n;
    long long s=n;
    for (int i=0; i<9; ++i) {
        std::cout<<s<<' ';
        s*=n;
    }
    std::cout<<std::endl;
    return 0;
}