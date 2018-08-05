Compile and build Introduction

First set up build folder:
mkdir build && cd build

1. For C++11 seperate examples,  please use the below build command:
clang++ -std=c++11 -Wall -Wextra ../examples/xxx.cpp -o xxx

2. For C++14 seperate files, please use the below build command:
clang++ --std=c++14 -Wall -Wextra ../c14/xxx.cpp -o xxx

3. For C++17 seperate files, please use the below build command:
clang++ --std=c++1z -Wall -Wextra ../c17/xxx.cpp -o xxx

4. For cmake build example:
cmake ../examples/RectangleDemo
make
