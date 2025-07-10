#include<stdio.h>

int main(){

    int n ;
    printf("Enter the number : " );
    scanf("%d" , &n);

    int sum = 0;
    for(int i=1 ; i<=n ; i++){
        sum = sum + i;
    }
    printf("Sum is : %d\n" , sum);

    // for printing the number in reverse
    for(int i=n; i>=1; i--){
        printf("%d\n" , i);
    }

    return 0;
}