/*REG.NO. CT101/G/26471/25
Name NGANGA ERIC KAMAU
DESCRIPTION: EXAM ELIGIBILITY
*/
#include<stdio.h>
int main(){
  int marks;
  float attendance_percentage;
  // ask the user to enter their attedance percentage
  printf ("enter your attendance percentage:\n");
  scanf("%f",& attendance_percentage);
  // ask the user to enter their marks
  printf("enter your marks:\n");
  scanf("%d" , &marks);
  //condition
  if (attendance_percentage>=75 && marks >=40)
  {
    printf("Eligible for final exam\n");
 } else {
 printf("Not eligible\n");
  } 
  return 0;
}