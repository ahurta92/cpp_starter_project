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

    int divisor;
    std::vector<int> vecVals2;
    std::cout << "List of Values Divisable by : ";
    std::cin >> divisor;
    
    std::vector<int> evenVecVals;

    std::copy_if(vecVals.begin(),vecVals.end(),
                    std::back_inserter(evenVecVals),
                    [divisor](int x){ return (x % divisor) == 0;});
    
    std::for_each(evenVecVals.begin(),evenVecVals.end(),[](int x){std::cout<<x<<" ";});


    
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