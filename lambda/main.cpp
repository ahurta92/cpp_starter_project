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
    
    std::vector<int> evenVecVals;

    std::copy_if(vecVals.begin(),vecVals.end(), 
        std::back_inserter(evenVecVals),
        [](int x){ return (x%2)==0;});
    std::cout<<"Sorted\n";
    for (auto val: evenVecVals){
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