/**
  * @file     	HDU_2019.h
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/23
  * @brief
  * @detail		��n(n<=100)���������Ѿ����մ�С����˳�����кã����������һ������x���뽫�������뵽�����У���ʹ�µ�������Ȼ����
  * @attention
  *  Not completed                                                \n
  * <h2><center>&copy;TheLeastRemove All Rights Reserved.</center></h2>
  */

#include <iostream>

int sequenceOrder(){
    int n, m;
    while (std::cin >> n >> m && n && m) {
        bool flag(true);
        for (int i = 0; i < n; i++) {
            int num;
            std::cin >> num;
            if (flag && m <= num) {
                std::cout << m << " " << num ;
                flag= false;
            }
            else {
                std::cout << num ;
            }
            if(i!=n-1){
                std::cout<<" ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}