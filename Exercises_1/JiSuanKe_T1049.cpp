/**
  * @file     	JiSuanKe_T1049.cpp
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/24
  * @brief      
  * @detail		�����ύʧ�ܵģ�ʲô����ƽ̨��
  * @attention
  *  ��ͷ������һ�� nn ��ƻ�����ܲ��ҵ�������ʱ����������һ�����ӡ�����ÿ xx Сʱ�ܳԵ�һ��ƻ������������ڳ���һ��ƻ��֮ǰ�������һ������ô���� yy Сʱ�㻹�ж��ٸ�������ƻ����

    �����ʽ
    �����һ���������� n,x,y\ (1\le n,x,y \le 1000)n,x,y (1��n,x,y��1000)��

    �����ʽ
    ���Ҳ��һ�У�ʣ�µ�ƻ��������
  * <h2><center>&copy;TheLeastRemove All Rights Reserved.</center></h2>
  */

#include <iostream>
void applesAndBugs(){
    int n, x, y;
    std::cin >> n >> x >> y;
    double m;
    m = static_cast<double > (y / x);
    n = n - m;
    if (n <= 0){
        std::cout << '0' << std::endl;
    }else{
        std::cout << n << std::endl;
    }
}