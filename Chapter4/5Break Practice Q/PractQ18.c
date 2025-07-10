#include<stdio.h>

int main(){
    int n;

    do{
        printf("Enter the number , 7 multiples");
        scanf("%d" , &n);
        printf("%d\n" , n);

        if (n % 7 == 0){
            break;
        }      
    } while (1);
    {
      printf("Is this what you studied in school days...\n"); 

    }
    return 0;
}
        