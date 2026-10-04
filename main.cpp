#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Name: ";
    std::cin >> name;   // read one word from stdin
    std::cout << "Hello, " << name << "!\n";
    return 0;
}