/**
  * @file     	JiSuanKe-T2235.cpp
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/23
  * @brief      
  * @detail
  * С A �������������ڴ����������һ��Сѧһ�꼶�����⣺���������� AA, BB, CC�����ҵ� A*BA?B, B*CB?C, A*CA?C �е����ֵ������ AA, BB, CC ���� A<B<CA<B<C��
    Ȼ������ʱ���ԭ��AA, CC �������Ѿ�ģ�������ˡ�������ˣ�С AA ������֪������ A*BA?B, B*CB?C, A*CA?C �У��п��ܳ�Ϊ���ֵ������Щ��
    �����ʽ
    ����һ��һ������ BB��
    �����ʽ
    ���һ�б�ʾ�����п��ܳ�Ϊ���ֵ��"A*B", "B*C", "A*C"���ж����ʱ����"A*B", "B*C", "A*C"���Ⱥ�˳��������м���һ���ո������ע�⣺���һ���Ǵ�д�� ��Ҫ����κζ���Ŀո�
  * @attention
  *  ����˳����ܻᱨ�����ܽ��ܡ�                                            \n
  * <h2><center>&copy;TheLeastRemove All Rights Reserved.</center></h2>
  */
#include <iostream>
void lost(){
    long long B;
    std::cin>>B;
    if(B<0){
        std::cout<<"A*B"<<std::endl;
    }else if(B==0){
        std::cout<<"A*B"<<" "<<"B*C"<<std::endl;
    }else{
        std::cout<<"B*C"<<std::endl;
    }
}

