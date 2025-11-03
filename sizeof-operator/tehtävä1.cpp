#include <iostream>

int main() {
    std::cout << "Tilaa tavuina:" << std::endl;
    std::cout << "int: " << sizeof(int) << " tavua" << std::endl;
    std::cout << "unsigned int: " << sizeof(unsigned int) << " tavua" << std::endl;
    std::cout << "float: " << sizeof(float) << " tavua" << std::endl;
    std::cout << "double: " << sizeof(double) << " tavua" << std::endl;
    std::cout << "char: " << sizeof(char) << " tavua" << std::endl;
    std::cout << "bool: " << sizeof(bool) << " tavua" << std::endl;

    return 0;
}
