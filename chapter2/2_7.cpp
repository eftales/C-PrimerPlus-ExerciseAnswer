#include<iostream>
void format_time(int hours,int minutes);
int main()
{
    int hours,minutes;
    std::cout<<"Enter the number of hours: ";
    std::cin >> hours;
    std::cout<<"Enter the number of minutes: ";
    std::cin >> minutes;

    format_time(hours,minutes);
    return 0;

}

void format_time(int hours,int minutes)
{
    std::cout<<"Time: "<<hours<<":"<<minutes<<std::endl;
}
