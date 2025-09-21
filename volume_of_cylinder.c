/*Name:Eric kamau ng'ang'a
Reg. number:CT101/G/26471/25
Description:program to compute volume of a cylinder
VOL.=πr²h
*/
#include<stdio.h>
int main(){
  // variable declaration
  float pi ,radius , height, volume;
  //promt user to enter pi
  printf("enter pi:\n");
  scanf("%f" ,&pi);
  //promt user to enter radius
  printf("enter radius:\n");
  scanf("%f" ,&radius);
 //promt user to enter height 
  printf("enter height:\n");
  scanf("%f" ,&height);
  // compute volume
  volume=pi*radius*radius*height;
  printf("volume is %.2f cm^3",volume);
  return 0;
}