# include <iostream>

int main() {

    //integer (whole numbers)
    int x; // Declare a variable x
    x = 5; // Assign the value 5 to x
    int y = 6;
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    //double (decimal numbers)
    double price = 4.99;
    double gpa = 2.5;
    double temperature = -3.5;

    std::cout << price << '\n';

    //char (single character)
    char letter = 'A';
    char symbol = '$';

    std::cout << letter << '\n';

    //bool (true or false)
    bool is_valid = true;

    std::cout << is_valid << '\n';

    //string (sequence of characters)
    std::string name = "Charlotte";
    std::string city = "Staffs";

    std::cout << "Hello, my name is " << name << '\n';

    return 0;   
}