/**
  * @file     	JiSuanKe_56458.cpp
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/24
  * @brief      
  * @detail	    两个for可以合并，但是我懒;
  *             方法二利用曼哈顿距离计算。
  * @attention
  *  在一个n×n 的矩阵中，每个位置均有一个人。
  *  已知中间点（比如 n=5，则中间点为 (3,3)的那个人感染了病毒。
  *  对于每个感染病毒的人，他的上下左右四个人均会在下一分钟感染病毒。
  *  当然，已经感染病毒的人是不会二次感染。
    已知在矩阵中间点的人在第 1 分钟的时候感染了病毒，问n×n 的矩阵中，每个人最早感染病毒的时间。

    输入格式
    第一行一个整数 n。
    输出格式
    输出共 n 行，每行 n 个以空格隔开的整数，代表这个位置的人最早感染病毒的时间。
  * <h2><center>&copy;TheLeastRemove All Rights Reserved.</center></h2>
  */

#include <iostream>
#include <cmath>

void inFestor(){
    int n;
    std::cin>>n;
    int t=n/2+1;
    int nums[t][t];
    for (int i = 0; i < t; ++i){
        for (int j = 0; j < t; ++j){
            nums[i][j]=i+j+1;
        }
    }
    for (int i = -n/2; i < t; ++i){
        for (int j = -n/2; j < t; ++j){
            //std::cout.width(2);
            std::cout<<nums[abs(i)][abs(j)]<<" ";
        }std::cout<<std::endl;
    }
}

void inFestor_plus(){
    int n;
    std::cin>>n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            //std::cout.width(2);
            std::cout<<std::abs(i-n/2)+std::abs(j-n/2)+1<<" ";
        }std::cout<<std::endl;
    }
}