/**
  * @file     	JiSuanKe_56458.cpp
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/24
  * @brief      
  * @detail	    ����for���Ժϲ�����������;
  *             ���������������پ�����㡣
  * @attention
  *  ��һ��n��n �ľ����У�ÿ��λ�þ���һ���ˡ�
  *  ��֪�м�㣨���� n=5�����м��Ϊ (3,3)���Ǹ��˸�Ⱦ�˲�����
  *  ����ÿ����Ⱦ�������ˣ��������������ĸ��˾�������һ���Ӹ�Ⱦ������
  *  ��Ȼ���Ѿ���Ⱦ���������ǲ�����θ�Ⱦ��
    ��֪�ھ����м������ڵ� 1 ���ӵ�ʱ���Ⱦ�˲�������n��n �ľ����У�ÿ���������Ⱦ������ʱ�䡣

    �����ʽ
    ��һ��һ������ n��
    �����ʽ
    ����� n �У�ÿ�� n ���Կո�������������������λ�õ��������Ⱦ������ʱ�䡣
  * <h2><center>&copy;TheLeastRemove All Rights Reserved.</center></h2>
  */

#include <iostream>
#include <cmath>

void inFestor(){
    int n;
    std::cin>>n;
    int t=n/2+1;
    int nums[t][t];
    for (int i = 0; i < t; ++i){
        for (int j = 0; j < t; ++j){
            nums[i][j]=i+j+1;
        }
    }
    for (int i = -n/2; i < t; ++i){
        for (int j = -n/2; j < t; ++j){
            //std::cout.width(2);
            std::cout<<nums[abs(i)][abs(j)]<<" ";
        }std::cout<<std::endl;
    }
}

void inFestor_plus(){
    int n;
    std::cin>>n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            //std::cout.width(2);
            std::cout<<std::abs(i-n/2)+std::abs(j-n/2)+1<<" ";
        }std::cout<<std::endl;
    }
}