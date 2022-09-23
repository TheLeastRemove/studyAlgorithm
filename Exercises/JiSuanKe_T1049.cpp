/**
  * @file     	JiSuanKe_T1049.cpp
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/24
  * @brief      
  * @detail		还能提交失败的？什么破烂平台！
  * @attention
  *  蒜头君买了一箱 nn 个苹果，很不幸的是买完时箱子里混进了一条虫子。虫子每 xx 小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，那么经过 yy 小时你还有多少个完整的苹果？

    输入格式
    输入仅一行三个整数 n,x,y\ (1\le n,x,y \le 1000)n,x,y (1≤n,x,y≤1000)。

    输出格式
    输出也仅一行，剩下的苹果个数。
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