/**
  * @file     	JiSuanKe_T1050.cpp
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/24
  * @brief      
  * @detail		The author is very lazy and will not write for the time being.
  * @attention
  *  小蒜蒜的班上有学生若干名，给出每名学生的年龄（整数），求班上所有学生的平均年龄，保留到小数点后两位。

    输入格式
    第一行有一个整数 n(1 \le n \le 100)n(1≤n≤100)，表示学生的人数。

    其后 nn 行每行有 11 个整数，表示每个学生的年龄，取值为 1515 到 2525。

    输出格式
    输出一行，该行包含一个浮点数，为要求的平均年龄，保留到小数点后两位。
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
