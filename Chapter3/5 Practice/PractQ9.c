#include<stdio.h>

int main (){
   int marks;
   printf("enter the marks (0-100):  ");
   scanf("%d" , &marks);

//    if (marks >= 30 && marks <= 100){
//     printf ("PASS \n");
//    } 
//    else if (marks >= 0 && marks < 30){
//    printf ("FAIL \n");
//    } 
//    else {
//     printf ("ERROR 105 : Wrong input \n");
//    }

marks <= 30 ? printf("FAIL") : printf ("PASS");
   
   return 0;
}