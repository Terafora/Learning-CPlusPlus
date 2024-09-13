#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int nubmer_t;
using text_t = std::string;
using number_t = int;


int main(){
    /*
    typedef is a keyword that allows you to create an alias for a data type.
    This is useful when you want to create a shorter or more descriptive name for a data type.
    Typedef has largely been replaced by using in modern C++ which works bettert with templates.
    */

    //pairlist_t pairlist;
    text_t first_name = "Charlotte";
    number_t age = 32;

    std::cout << first_name << '\n';
    std::cout << age << '\n';

    return 0;
}