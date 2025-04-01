#pragma once

#include <iostream>
#include <string>

#include "Test.hpp"

namespace kjd
{

    class A
    {
    public:
        A()
        {
            std::cout << "A" << "\n";
        }

        std::string getMessage()
        {
            return "I AM A";
        }
    };

}

namespace kjd
{

    class B
    {
    public:
        B()
        {
            std::cout << "B" << "\n";
        }

        std::string getMessage()
        {
            return "I AM B";
        }
    };

}
