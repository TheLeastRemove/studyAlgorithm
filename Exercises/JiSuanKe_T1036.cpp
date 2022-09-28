/**
  * @file     	JiSuanKe_T1036.cpp
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/24
  * @brief      
  * @detail		The author is very lazy and will not write for the time being.
  * @attention
  * 蒜厂最近推出了一个“收集瓶盖赢大奖”的活动：如果你拥有 1010 个印有“幸运”、或 2020 个印有“鼓励”的瓶盖，就可以兑换一个神秘大奖。
    现分别给出你拥有的印有“幸运”和“鼓励”的瓶盖数，判断是否可以去兑换大奖。
    输入格式
    一行，包含两个不超过 100100 的非负整数，分别是印有“幸运”和“鼓励”的瓶盖数，用一个空格隔开。
    输出格式
    一行。若可以兑换大奖，输出 11，否则输出 00。
  * <h2><center>&copy;TheLeastRemove All Rights Reserved.</center></h2>
  */
#include <iostream>
void collectCaps(){
    int a,b;
    std::cin>>a>>b;
    if(a-10>=1 || b-20>=1){
        std::cout<<1;
    }else{
        std::cout<<0;
    }
}
