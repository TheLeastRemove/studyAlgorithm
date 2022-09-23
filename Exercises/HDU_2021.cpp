/**
  * @file     	HUD_2021.h
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/23
  * @brief
  * @detail		作为杭电的老师，最盼望的日子就是每月的8号了，因为这一天是发工资的日子，养家糊口就靠它了，呵呵
                但是对于学校财务处的工作人员来说，这一天则是很忙碌的一天，财务处的小胡老师最近就在考虑一个问题：如果每个老师的工资额都知道，最少需要准备多少张人民币，才能在给每位老师发工资的时候都不用老师找零呢？
                这里假设老师的工资都是正整数，单位元，人民币一共有100元、50元、10元、5元、2元和1元六种。
  * @attention
  *  输入数据包含多个测试实例，每个测试实例的第一行是一个整数n（n<100），表示老师的人数，然后是n个老师的工资。
     n=0表示输入的结束，不做处理。
  * 对于每个测试实例输出一个整数x,表示至少需要准备的人民币张数。每个输出占一行。
  * <h2><center>&copy;TheLeastRemove All Rights Reserved.</center></h2>
  */
#include <iostream>

int pay(){
    int n(0);
    while(std::cin>>n && n){
        int x(0);
        while(n--)
        {
            int pay=0;
            std::cin>>pay;
            //100 50 10 5 2 1
            while (pay>=100){
                pay-=100;
                x++;
            }
            while (pay>=50){
                pay-=50;
                x++;
            }
            while (pay>=10){
                pay-=10;
                x++;
            }
            while (pay>=5){
                pay-=5;
                x++;
            }
            while (pay>=2){
                pay-=2;
                x++;
            }
            while (pay>=1){
                pay-=1;
                x++;
            }
        }
        std::cout<<x<<std::endl;
    }
}
