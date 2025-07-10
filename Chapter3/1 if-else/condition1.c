#include<stdio.h>

int main(){
    int age =19;
    printf("Enter the age : ");
    scanf("%d" , &age);


    // if we write only one statement then we can write without "{}"

    if (age > 18)
        printf("adult \n");

    else 
        printf("not an adult \n");

    return 0;
}