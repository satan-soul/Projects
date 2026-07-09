#include <iostream>

int main(){
    //circumference of a circle 2*pi*r
    
    const double PI = 3.14159;
    double radius;
    std::cout<<"Enter the radius of the circle to find its circumference:\n";
    std::cin>>radius;
    double circumference = 2*PI*radius;

    std::cout<< circumference << "cm";
    return 0;
}
