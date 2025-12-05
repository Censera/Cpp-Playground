#include <iostream>

int main(void)
{
    std::string str = "Echo Inputs (type q to exit):";
    
    do
    {
        if (str == "q") return 0;

        std::cout << str << "\n> ";
    } while (std::cin >> str);

    return 00;
}
