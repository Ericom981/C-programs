/*REG.NO. CT101/G/26471/25
Name NGANGA ERIC KAMAU
DESCRIPTION: MOBILE DATA PURCHASE
*/
#include <stdio.h>
int main(){
  int choice;
  //display the menu
  printf("Mobile Data Purchase.\n");
  printf("OPTION____BUNDLE_____COST(KES)\n ");
  printf("1.                  100MB           50 \n");
  printf("2.                   500MB          200 \n");
  printf("3.                  1GB               350\n");
  printf("4.                   2GB             600\n");
  
  // ask user for input 
  printf("Enter your choice (1-4):\n");
  scanf("%d" , &choice);
  if (choice == 1)
      printf("You selected 100MB. cost 50KES.\n");
      else if(choice==2)
      printf("You selected 500 MB.cost 200KES.\n");
      else if(choice==3)
      printf("You selected 1GB. Cost 350 KES.\n");
      else if(choice==4)
      printf("You selected 2GB.Cost= 600 KES.\n");
      else 
      printf("Invalid choice");
  
  return 0;
}