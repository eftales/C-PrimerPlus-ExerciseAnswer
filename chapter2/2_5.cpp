#include<iostream>
int main()
{
    double  C,F;
    std::cout<<"Please enter a Celsius value: ";
    std::cin >> C;

    F = C * 1.8 + 32;

    std::cout<<C<<" degrees Celsius is "<<F<<" degrees Fahrenheit."<<std::endl;;
    return 0;

}
