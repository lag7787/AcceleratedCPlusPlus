#include <iostream> //include directive , requesting the names related to stream data for input and output. in particular, including the header makes the library facilities avaialble to us
#include <string>

int main() {
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;

    const std::string greeting = "Hello, " + name + "!";

    const std::string spaces(greeting.size(),' '); // some interesting syntax
    const std::string second = "* " + spaces + " *";
    const std::string first(second.size(), '*');

    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;
}