#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>
#include <algorithm>

std::vector<int> GenerateRandVec(int numOfNums,int min, int Max);

int main()
{
    std::vector<int> vecVals = GenerateRandVec(10, 1, 50);
    /* 
    for(auto a: vecVals)
        std::cout<< a << "\n";
        */
    std::vector<int> vec1 = {1,2,3,4,5};
    std::vector<int> vec2 = {1,2,3,4,5};
    std::vector<int> vec3(5);

    transform(vec1.begin(),vec1.end(),vec2.begin(),vec3.begin(),
                    [](int x, int y){return x + y; });

    for(auto a: vec3)
        std::cout<< a << "\n";

    return 0;
}

std::vector<int> GenerateRandVec(int numOfNums,
                                 int min, int max)
{
    std::vector<int> vecValues;
    srand(time(NULL));
    int i = 0, randVal = 0;
    while (i < numOfNums)
    {
        randVal = min + std::rand() % ((max + 1) - min);
        vecValues.push_back(randVal);
        i++;
    }
    return vecValues;
}