#include<stdio.h>

int main (){
   char day; // mon- a , tue- b , wed- c .... 

   // we can use integer and character as a constant
   printf ("Choose day in serial small alphabets (a - g) : ");
   scanf("%c" , &day) ;

   switch (day) {

       case 'a' : printf("monday \n");
                break; 
       case 'b' : printf("Tuesday \n");
                break; 
       case 'c' : printf("Wednesday \n");
                break; 
       case 'd' : printf("Thursday \n");
                break; 
       case 'e' : printf("Friday \n");
                break; 
       case 'f' : printf("Saturday \n");
                break; 
       case 'g' : printf("sunday \n");
                break; 
       default : printf("not a valid input");
   }

   return 0;
} 