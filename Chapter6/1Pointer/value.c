#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;



    // value
    printf("%d\n", age);
    
    printf("%d\n", *ptr);

    printf("%u\n" , *(&age));


    return 0;
}