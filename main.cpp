#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include "MDVRPfile.h"

int main() {
    MDVRP test("/Users/rasmu/Project1/p01.txt");
    std::cout<<test.x[40];

}