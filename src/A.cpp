#include "headers/Utils.hpp"

using namespace std;

namespace kjd
{
    A::A()
    {
        cout << "I am A\n";
    }
    string A::getMessage() const
    {
        return "Hello from class A!";
    }
}