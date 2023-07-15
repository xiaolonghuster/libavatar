#include <iostream>
#include "avatar_library.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Hello, " << getVersionName() << std::endl;
    std::cout << "Hello, " << u3d::getVersionName() << std::endl;
    std::cout << "Hello, " << unreal::getVersionName() << std::endl;
    return 0;
}
