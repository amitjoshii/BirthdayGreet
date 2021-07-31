#include <iostream>
#include <fstream>

int main()
{

    std::ifstream is("example.txt");

    char c;
    while (is.get(c))
        std::cout << c;

    if (is.eof())
        std::cout << "s\n";
    else
        std::cout << "[error reading]\n";

    is.close();

    return 0;
}

