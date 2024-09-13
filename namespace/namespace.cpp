#include <iostream>

    namespace first {
        int x = 5;
    }
    namespace second {
        double x = 3.14159;
    }

int main () {

    //namespace is a way to group variables, functions, and classes under a name to prevent naming conflicts and to organize code.
    //std is a namespace that contains the standard C++ library

    using namespace first;
    
    //it's often standard practive to use "using namespace std" to avoid having to write std:: before every standard library function though not advised in large projects

    std::cout << x << '\n';
    std::cout << second::x << '\n';
    return 0;
}