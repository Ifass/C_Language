# include<stdio.h>

//  to find the perimeter of the rectangle
int main() {
   
    int a , b;

    printf("Enter the length of rectangle");
    scanf("%d", &a);

    printf("Enter the breadth of the rectangle");
    scanf("%d", &b);

    printf ("the perimeter of the rectangle is %d" , 2*(a + b));
    return 0;


}