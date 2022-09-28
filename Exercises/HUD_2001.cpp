/**
  * @file     	HDU_2001.h
  * @author   	TheLeastRemove
  * @email   	TheLeastRemove@outlook.com
  * @version	V0.1
  * @date    	22/9/23
  * @brief
  * @detail		计算两点间的距离，输入两点坐标（X1,Y1）,（X2,Y2）,计算并输出两点间的距离。
  * @attention
  *  Not completed                                                \n
  * <h2><center>&copy;TheLeastRemove All Rights Reserved.</center></h2>
  */
#include <iostream>
#include <cmath>
int DistanceBetweenDoublePointer(){
    double x1,x2,y1,y2,ans;
    while(std::cin>>x1>>y1>>x2>>y2){
        ans=std::sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        printf("%.2f\n",ans);
    }
}
