#include "myLib.h"
#include <iostream>

namespace myLib {
    void printMessage(const std::string& msg) { // Implementation
        std::cout << "Message: " << msg << std::endl;
    }
}