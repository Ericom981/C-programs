/*Name:Eric kamau ng'ang'a
Reg. number:CT101/G/26471/25
Description electric_bill
*/
#include <stdio.h>
  float electric_bill(float units); //function prototype
  int main (void){
    float units,bill;
    printf("Enter number of units consumed \t");
    scanf("%f",&units);
    bill=electric_bill(units);//calling the function 
    printf("Electric bill is ksh %.2f\n", bill);
    return 0;
  }
  //function definition 
  float electric_bill(float units){
      float bill;
      if (units<=100){
      bill= units*10;
    }
 else if (units<=200){
   bill=(100*10) +( (units-100)*15);
       }
    else{
        bill=(100*10)+(100*15)+((units-200)*20);
    }   
    
    return bill;
    }
  