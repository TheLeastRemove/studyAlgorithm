/**
  * @file     	replaceSequenceString.cpp
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/29
  * @brief      
  * @detail		 дһ����������˳��s1�еĵ�i���ַ�����j���ַ�֮����ַ���s2���滻��
  * @attention
  *  Not completed                                                \n
  * <h2><center>&copy;TheLeastRemove All Rights Reserved.</center></h2>
  */
#include <string>
std::string replaceSequenceString(std::string A,std::string B,int i,int j){
    if(j-i+1 != B.length()){
        return "insertStringDoesNotMatchSpace!";
    }
    int K(0);
    while(i!=j+1){
        A[i-1]=B[K];
        i++;
        K++;
    }
    return A;
}
