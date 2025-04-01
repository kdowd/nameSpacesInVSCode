
#pragma once

#include <iostream>
#include <string>

namespace kjd
{

    class C
    {
    public:
        C()
        {
            std::cout << "C" << "\n";
        }

        std::string getMessage()
        {
            return "I AM C";
        }
    };

}
