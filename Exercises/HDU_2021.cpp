/**
  * @file     	HUD_2021.h
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/23
  * @brief
  * @detail		��Ϊ�������ʦ�������������Ӿ���ÿ�µ�8���ˣ���Ϊ��һ���Ƿ����ʵ����ӣ����Һ��ھͿ����ˣ��Ǻ�
                ���Ƕ���ѧУ���񴦵Ĺ�����Ա��˵����һ�����Ǻ�æµ��һ�죬���񴦵�С����ʦ������ڿ���һ�����⣺���ÿ����ʦ�Ĺ��ʶ֪����������Ҫ׼������������ң������ڸ�ÿλ��ʦ�����ʵ�ʱ�򶼲�����ʦ�����أ�
                ���������ʦ�Ĺ��ʶ�������������λԪ�������һ����100Ԫ��50Ԫ��10Ԫ��5Ԫ��2Ԫ��1Ԫ���֡�
  * @attention
  *  �������ݰ����������ʵ����ÿ������ʵ���ĵ�һ����һ������n��n<100������ʾ��ʦ��������Ȼ����n����ʦ�Ĺ��ʡ�
     n=0��ʾ����Ľ�������������
  * ����ÿ������ʵ�����һ������x,��ʾ������Ҫ׼���������������ÿ�����ռһ�С�
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
