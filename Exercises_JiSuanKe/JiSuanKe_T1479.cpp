/**
  * @file     	JiSuanKe_T1479.cpp
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/28
  * @brief      
  * @detail		��һ�� 3\times33��3 ����Խ���Ԫ��֮�͡�

                �����ʽ
                һ�� 3\times33��3 ����

                �����ʽ
                �ո�ֿ������������ֱ������Խ���Ԫ�صĺ��븱�Խ��ߵ�Ԫ�صĺ�
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