#include<stdio.h>

int main(){
    int age=19;
    printf("Enter the age : ");
    scanf("%d" , &age);

    if (age > 18) {
        printf("adult\n");
    }

    else if (age > 13 && age < 18) {
        printf("teenager \n");

    }

    else {
        printf("Child \n");

    }

    return 0;
}