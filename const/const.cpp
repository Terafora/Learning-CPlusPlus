#include <iostream>

int main(){
    //const prevents anything from changing the value of the variable (read-only)
    //consts are also conventionally written in uppercase
    const double PI = 3.14159;
    double radius = 5.0;
    double circumference = 2 * PI * radius;

    std::cout << "The area of a circle with a radius of " << radius << " is " << circumference << "cm." << '\n';

    return 0;
}