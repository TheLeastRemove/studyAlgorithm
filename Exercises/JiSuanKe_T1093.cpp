/**
  * @file     	JiSuanKe_T1093.cpp
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/24
  * @brief      
  * @detail		The author is very lazy and will not write for the time being.
  * @attention
  *  ��һ�������е�ֵ���������´�š����磬ԭ����˳��Ϊ 8,6,5,4,18,6,5,4,1��Ҫ���Ϊ 1,4,5,6,81,4,5,6,8��

    �����ʽ
    ����Ϊ���У���һ��������Ԫ�صĸ��� n(1<n<100)n(1<n<100)���ڶ����� nn ��������������ΧΪ [-100, 100][?100,100]����ÿ��������֮���ÿո�ָ���

    �����ʽ
    ���Ϊһ�У��������������������ÿ��������֮���ÿո�ָ���
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