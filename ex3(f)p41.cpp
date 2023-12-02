#include <iostream>

int main()
{
    int a;
    int b;
    int c;
    std::cin>>a>>b>>c;
    if ((a+b==0 && a!=0 && b!=0) || (b+c==0 && b!=0 && c!=0)|| (a+c==0 && a!=0 && c!=0))
        std::cout<<"YES"<<std::endl;
    else
        std::cout<<"NO"<<std::endl;
    return 0;
}