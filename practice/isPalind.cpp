/**
  * @file     	isPalind.cpp
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/27
  * @brief      
  * @detail		判断回文序列，以@分割，舍友作业。
  * @attention
  *  Not completed                                                \n
  * <h2><center>&copy;TheLeastRemove All Rights Reserved.</center></h2>
  */

#include <iostream>
#include <stack>
void isPalind(){
    char inData[100];
    std::cin>>inData;
    std::stack<char>halfData;
    int i(0);
    for (i = 0; i < 100; ++i){
        if(inData[i]=='@'){
            halfData.push(inData[i]);
        }else{
            break;
        }
    }
    bool flag(true);
    for (int j=1;j<i;j++)
    {
        if(inData[i+j]!=halfData.top()){
            flag = false;
        }
        halfData.pop();
    }
    std::cout<<flag;
}
//写一个函数，将顺序串s1中的第i个字符到第j个字符之间的字符用s2串替换。
