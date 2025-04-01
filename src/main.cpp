#include <iostream>
#include "headers/Utils.hpp"
#include "headers/Functions.hpp"

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

    Test2();

    std::getchar();
}
