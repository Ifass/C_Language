#include<stdio.h>

int main(){ 
    int num=67;

    int a = num / 10;
    scanf("%d" , &a);
    int b = num % 10;
    scanf("%d" , &b);

    int result = a + b ;
    printf ("solution is",result);
    
    return 0;
}