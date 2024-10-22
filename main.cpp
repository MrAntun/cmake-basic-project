#include <iostream>

int main(){
    int result = 1 + 1;
    std::cout << "result: " << result << std::endl;
    return 0;
}

// (On Windows)
// cmake: (in using_cmake folder): "cmake -S . -B .\build\ -G "MinGW Makefiles"
// make: (in build folder): "mingw32-make.exe"