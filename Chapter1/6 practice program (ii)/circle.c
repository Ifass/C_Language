#include<stdio.h>

// Area of a circle
int main() {
    float area, r;
    printf("Enter circle radius...");
    scanf("%f" , &r);
    area = 3.14 *r*r;

    printf("Area of circle:%f", area);
    return 0;

}