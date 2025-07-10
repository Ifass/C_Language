#include<stdio.h>
    int main(){
        int marks;
        printf("Enter the marks (0-100) : ");
        scanf("%d" , &marks);

        if (marks < 30){
            printf ("Grade C");
        }
        else if (marks >= 30 && marks < 70){
            printf("Grade B");
        }
        else if (marks >= 70 && marks < 90){
            printf("Grade A");
        }
        else if (marks >= 90 && marks < 100){
            printf("Grade A+");
        }

        else {
            printf ("Error 105 : Wrong Input \n Print the number between 0 to 100\n");
        }
        return 0;
        
    }