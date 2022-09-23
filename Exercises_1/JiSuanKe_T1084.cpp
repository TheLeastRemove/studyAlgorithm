/**
  * @file     	JiSuanKe_T1084.cpp
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/24
  * @brief      
  * @detail		打完游戏就是这种无聊的模拟题，晦气。
  * @attention
  *  雇佣兵的体力最大值为 MM，初始体力值为 00、战斗力为 NN、拥有 XX 个能量元素。
    当雇佣兵的体力值恰好为 MM 时，才可以参加一个为期 MM 天的战斗期，战斗期结束体力值将为 00。在同一个战斗期内，雇佣兵每连续战斗 nn 天，战斗力就会上升 11 点，nn 为当前战斗期开始时的战斗力。
    一个战斗期结束后，雇佣兵需要用若干个能量元素使其体力恢复到最大值 MM，从而参加下一个战斗期。每个能量元素可以恢复若干体力，但是每个能量元素可以恢复的体力值不超过当前的战斗力。每个能量元素只能使用一次。

    请问：雇佣兵的战斗力最大可以到达多少。
    说明：只在战斗期结束后可以使用能量元素，可以使用多个能量元素。

    输入格式
    一行包括三个整数 MM、NN、XX，相邻两个整数之间用单个空格隔开。MM、NN、XX 均为不超过 1000010000 的正整数。
    输出格式
    输出一个整数，为雇佣兵的最大战斗力。                                                \n
  * <h2><center>&copy;TheLeastRemove All Rights Reserved.</center></h2>
  */
#include <iostream>
void mercenary(){
    int M,N,X;
    std::cin>>M>>N>>X;
    while(X>0){
        if(M%N==0)
        { X = X - M / N; }
        else
        { X = X - M / N - 1; }
        if(X>=0)
        { N = N + M / N; }
        if(X<0||M<N)
            break;
    }
    std::cout<<N<<std::endl;

}