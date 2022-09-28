/**
  * @file     	JiSuanKe_T1479.cpp
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/28
  * @brief      
  * @detail		求一个 3\times33×3 矩阵对角线元素之和。

                输入格式
                一个 3\times33×3 矩阵。

                输出格式
                空格分开的两个数，分别是主对角线元素的和与副对角线的元素的和
  * @attention
  *  Not completed                                                \n
  * <h2><center>&copy;TheLeastRemove All Rights Reserved.</center></h2>
  */
#include <iostream>
void sumDiagonally(){
    int ansA(0),ansB(0),temp(0);
    for (int i = 1; i < 10; ++i)
    {
        std::cin>>temp;
        if(i==1||i==5||i==9){
            ansA+=temp;
        };
        if(i==3||i==5||i==7){
            ansB+=temp;
        }
    }
    std::cout<<ansA<<" "<<ansB;
}