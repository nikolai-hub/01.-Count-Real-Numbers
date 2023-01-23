#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>

typedef std::vector<double> VecOfDoubles;

VecOfDoubles readInput() {
    VecOfDoubles input;
    std::string line; 
    getline(std::cin, line);
    std::istringstream istr(line);
    double currDouble = 0.0;
    while (istr >> currDouble)
    {
        input.push_back(currDouble);
    }

    return input;
}

int main()
{
    VecOfDoubles inputDoubles = readInput();
    std::map<double, int> doublesCount;
    for (const auto number : inputDoubles)
    {
        doublesCount[number]++;
    }
    
    for (std::pair<double, int> printSolution: doublesCount)
    {
        std::cout << printSolution.first << " -> " << printSolution.second << std::endl;
    }


    return 0;
}
