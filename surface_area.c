/*Name:Eric kamau ng'ang'a
Reg. number:CT101/G/26471/25
Description:program to compute surface area of a cylinder
S.A=2πr²+2πrh
*/
#include<stdio.h>
int main(){
  // variable declaration
  float pi ,radius , height, surface_area;
  //promt user to enter pi
  printf("enter pi:\n");
  scanf("%f" ,&pi);
  //promt user to enter radius
  printf("enter radius:\n");
  scanf("%f" ,&radius);
 //promt user to enter height 
  printf("enter height:\n");
  scanf("%f" ,&height);
  // compute surface area
  surface_area=2*pi*radius*radius +2*pi*height;
  printf("surface_area is %.2f cm^3",surface_area);
  return 0;
}