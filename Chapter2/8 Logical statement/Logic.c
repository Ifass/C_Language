#include<stdio.h>
# include<math.h>

 int main (){
   // AND && Logical operators
    printf("%d \n", 3>4 && 6>3);
    printf("%d \n", 3>2 && 5>2);

   // OR || Logical operators
   printf("%d \n", 7>2 || 3>5);
   printf("%d \n", 2>7 || 4>5);

   // NOT ! Logical operators
   printf("%d \n", !((7>2) && (6>3)));
    return 0;
 }