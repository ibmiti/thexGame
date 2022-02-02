#include <iostream>

int main()
{   
    std::cout << "You're an agent of chaos, you will be breaking into a secure throne world...";
    std::cout << std::endl;
    std::cout << "Enter the correct sequence to continue...";

    int a = 4;
    int b = 3;
    int c = 2;

    int sum = a + b + c;
    int prod = (a * b) * c;

    std::cout << std::endl;
    std::cout << sum << std::endl;
    std::cout << prod << std::endl;

    return 0;
}