#include<stdio.h>

int main(){
    int age=19;
    printf("Enter the age : ");
    scanf("%d" , &age);

    if (age > 18) {
        printf("adult\n");
        printf("They can vote \n");
        printf("They can drive\n");
        printf("They can apply  for pad card \n");
        printf("They can enter into legal contracts \n");
    }

    else {
        printf("not an adult \n");

    }

    printf("thank you");
    return 0;
}