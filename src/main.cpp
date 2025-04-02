#include <iostream>
#include "headers/Utils.hpp"

using namespace std;

int main()
{
    cout << "SAYING HELLO\n";

    using kjd::A;
    using kjd::B;
    using kjd::C;

    A a;
    B b;
    C c;

    std::cout << c.getMessage() << "\n ";

    std::getchar();
}
