/**
  * @file     	isPalind.cpp
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/27
  * @brief      
  * @detail		�жϻ������У���@�ָ������ҵ��
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
//дһ����������˳��s1�еĵ�i���ַ�����j���ַ�֮����ַ���s2���滻��
