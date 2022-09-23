/**
  * @file     	JiSuanKe-T2235.cpp
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/23
  * @brief      
  * @detail
  * 小 A 来到了迷阵的入口处。他面对着一道小学一年级的试题：给出三个数 AA, BB, CC，请找到 A*BA?B, B*CB?C, A*CA?C 中的最大值。其中 AA, BB, CC 满足 A<B<CA<B<C。
    然而由于时间的原因，AA, CC 两个数已经模糊不清了。尽管如此，小 AA 还是想知道，在 A*BA?B, B*CB?C, A*CA?C 中，有可能成为最大值的有哪些。
    输入格式
    输入一行一个整数 BB。
    输出格式
    输出一行表示所有有可能成为最大值的"A*B", "B*C", "A*C"。有多个答案时按照"A*B", "B*C", "A*C"的先后顺序输出，中间用一个空格隔开。注意：输出一定是大写且 不要输出任何多余的空格。
  * @attention
  *  调换顺序可能会报错？不能接受。                                            \n
  * <h2><center>&copy;TheLeastRemove All Rights Reserved.</center></h2>
  */
#include <iostream>
void lost(){
    long long B;
    std::cin>>B;
    if(B<0){
        std::cout<<"A*B"<<std::endl;
    }else if(B==0){
        std::cout<<"A*B"<<" "<<"B*C"<<std::endl;
    }else{
        std::cout<<"B*C"<<std::endl;
    }
}

