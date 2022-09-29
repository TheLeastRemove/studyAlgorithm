/**
  * @file     	speculation.cpp
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/29
  * @brief      
  * @detail		The author is very lazy and will not write for the time being.
  * @attention
  *  Not completed                                                \n
  * <h2><center>&copy;TheLeastRemove All Rights Reserved.</center></h2>
  */
#include <iostream>
#include <random>
#include "windows.h"

void speculation()
{
    // 记录最大值和次数以及破产次。
    // 传入本金
    std::pair<int, int> assetMaximum(0, 0);
    int Bankruptcy(0);
    int principal;
    unsigned seed;
    std::cin >> principal;
    for (Bankruptcy = 0; principal > 0; ++Bankruptcy)
    {
        seed = time(0);
        srand(seed);
        bool randomNum = rand() % 2;
        if (randomNum)
        {
            principal *= 2;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
            std::cout << "The-" << Bankruptcy << "-result is:" << "profit." << "---";
            std::cout << "Remaining principal is :" << principal << std::endl;
        } else
        {
            principal /= 2;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
            std::cout << "The-" << Bankruptcy << "-result is:" << "loss." << "---";
            std::cout << "Remaining principal is :" << principal << std::endl;
        }

        if (principal > assetMaximum.second)
        {
            assetMaximum.first = Bankruptcy;
            assetMaximum.second = principal;
        }
        _sleep(1000);
    }
    std::cout << "---------------" << std::endl;
    std::cout << "The max times is:" << assetMaximum.first << "and principal is:" << assetMaximum.second << std::endl;
    std::cout << "The number of losses is:" << Bankruptcy << std::endl;
    std::cout << "---------------" << std::endl;
}