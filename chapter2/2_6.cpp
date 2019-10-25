#include<iostream>
int main()
{
    double  light_years;
    std::cout<<"Enter the number of light years: ";
    std::cin >> light_years;

    long long int astronomical_units = light_years * 63240;

    std::cout<<light_years<<" light years = "<<astronomical_units<<" astronomical units."<<std::endl;
    return 0;

}
