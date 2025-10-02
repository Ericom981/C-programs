/*REG.NO. CT101/G/26471/25
Name NGANGA ERIC KAMAU
DESCRIPTION: WATER_BILL_CALACULATOR
*/
#include<stdio.h>
int main(){
  float water_bill, water_units;
  // ask the customer to enter their water units
  printf ("enter your water units:\n");
  scanf("%f",& water_units);
  //condition for billing 
  if (water_units >=0 &&water_units<=30){
    water_bill =water_units *20; //rate 20 per unit
    printf("water_bill=%.2f ksh.\n", water_bill);
  }
    else if(water_units >=31 && water_units <=60){
water_bill=water_units*25;//rate 25 per unit
printf("water_bill=%.2f ksh .\n", water_bill);
}
else if(water_units>60){
  water_bill=water_units*30; // rate 30 per unit
  printf("water_bill=%.2f ksh.\n",water_bill);
}
 return 0;
 } 