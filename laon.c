/*Name:Eric kamau ng'ang'a
Reg. number:CT101/G/26471/25
Description:program to loan
*/
#include<stdio.h>
int main(){
  // variable declaration
  int age, income;
  printf ("enter your age:\n");
  scanf("%d", &age);
  printf ("enter your annual income:\n");
  scanf("%d" ,&income);
  if (age<21 & income<21000){
  printf ("unfortunately we are unable to offer you a loan at this moment. \n");}
  else if(age>=21 && income>=21000){
  printf("Congratulations you qualify for a loan. \n");}
  return 0;
}