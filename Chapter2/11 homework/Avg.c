# include<stdio.h>
# include<math.h>

int main(){

    // to find the average of 3 numbers
    int a , b , c , avg;
    printf ("Enter the first number : " );
    scanf("%d" , &a);

    printf("Enter the second number : ");
    scanf("%d" , &b);

    printf("Enter the third number : ");
    scanf("%d" , &c);
    
    avg = (a+b+c)/3;
    printf("Average of 3 numbers are :%d", avg);
    return 0;
    
}