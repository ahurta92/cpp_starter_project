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

    for (auto val: vecVals){
        std::cout<<val << "\n";
    }
    
    std::sort(vecVals.begin(),vecVals.end(),
        [](int x, int y){ return x > y;});
    std::cout<<"Sorted\n";
    for (auto val: vecVals){
        std::cout<<val << "\n";
    }
    
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