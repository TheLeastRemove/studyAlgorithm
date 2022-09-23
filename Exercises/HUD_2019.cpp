/**
  * @file     	HDU_2019.h
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/23
  * @brief
  * @detail		有n(n<=100)个整数，已经按照从小到大顺序排列好，现在另外给一个整数x，请将该数插入到序列中，并使新的序列仍然有序。
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