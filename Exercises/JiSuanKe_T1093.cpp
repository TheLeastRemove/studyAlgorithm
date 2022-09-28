/**
  * @file     	JiSuanKe_T1093.cpp
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/24
  * @brief      
  * @detail		The author is very lazy and will not write for the time being.
  * @attention
  *  将一个数组中的值按逆序重新存放。例如，原来的顺序为 8,6,5,4,18,6,5,4,1。要求改为 1,4,5,6,81,4,5,6,8。

    输入格式
    输入为两行：第一行数组中元素的个数 n(1<n<100)n(1<n<100)，第二行是 nn 个整数（整数范围为 [-100, 100][?100,100]），每两个整数之间用空格分隔。

    输出格式
    输出为一行：输出逆序后数组的整数，每两个整数之间用空格分隔。
  * <h2><center>&copy;TheLeastRemove All Rights Reserved.</center></h2>
  */
#include <iostream>
void reverseArray(){
    int m,n[101];
    std::cin>>m;
    for(int i=0;i<m;i++){
        std::cin>>n[i];
    }
    for(int i=m-1;i>=0;i--){
        std::cout<<n[i]<<" ";
    }
}