#include <iostream>

int main()
{
    int a;
    std::cin>>a;
    int n1=a/100;
    int n2=(a/10)%10;
    int n3=a%10;
    if (n1<n2 && n2<n3)
        std::cout<<"YES"<<std::endl;
    else
        std::cout<<"NO"<<std::endl;
    return 0;
}