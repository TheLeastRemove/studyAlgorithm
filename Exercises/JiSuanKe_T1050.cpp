/**
  * @file     	JiSuanKe_T1050.cpp
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/24
  * @brief      
  * @detail		The author is very lazy and will not write for the time being.
  * @attention
  *  С����İ�����ѧ��������������ÿ��ѧ�������䣨�����������������ѧ����ƽ�����䣬������С�������λ��

    �����ʽ
    ��һ����һ������ n(1 \le n \le 100)n(1��n��100)����ʾѧ����������

    ��� nn ��ÿ���� 11 ����������ʾÿ��ѧ�������䣬ȡֵΪ 1515 �� 2525��

    �����ʽ
    ���һ�У����а���һ����������ΪҪ���ƽ�����䣬������С�������λ��
  * <h2><center>&copy;TheLeastRemove All Rights Reserved.</center></h2>
  */
#include<iostream>
#include <iomanip>
void seekAverAge(){
    int n;
    while(std::cin >> n)
    {
        double sum = 0.0, num;
        for(int i = 0; i < n; i++)
        {
            std::cin >> num;
            sum += num;
        }
        std::cout<<std::fixed<<std::setprecision(2)<<sum/n<< std::endl;
    }
}
