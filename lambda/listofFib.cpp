#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>
#include <algorithm>
#include <functional>

std::vector<int> GenerateRandVec(int numOfNums,int min, int Max);

std::vector<int> GenerateFibList(int maxNums);
int main()
{
    std::vector<int> vecVals = GenerateRandVec(10, 1, 50);
    /* 
    for(auto a: vecVals)
        std::cout<< a << "\n";
        */
    
  /*   std::function<int(int)> Fib = 
        [&Fib](int n) { return n < 2 ? n :Fib(n-1)+Fib(n-2); };

    std::cout<< "Fib 4 : " << Fib(4)<< "\n"; */

    

    std::vector<int> listOfFibs =GenerateFibList(10);

    for(auto val:listOfFibs)
        std::cout<<val <<"\n";

    return 0;
}

std::vector<int> GenerateFibList(int maxNums){
    std::vector<int> listOfFibs;
    int i= 0;
    std::function<int(int)> Fib = 
        [&Fib](int n) { return n < 2 ? n :Fib(n-1)+Fib(n-2); };
    while(i < maxNums){
        listOfFibs.push_back(Fib(i));
        i++;
    }
    return listOfFibs;
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