 #include<stdio.h>

 int main (){
    int marks;
    printf("enter Marks 0-100 :  ");
    scanf("%d" , &marks);

    if (marks >= 0 && marks <= 30) {
        printf("FAIL");
    } else if(marks >= 30 && marks <= 100) {
        printf("PASS");
    } else {
        printf("wrong input");
    }

     return 0;
 }


