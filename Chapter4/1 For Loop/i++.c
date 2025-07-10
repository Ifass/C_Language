#include<stdio.h>
int main(){
    // incriment operator

    // ++i (Pre Increment operator)
    // i++ (Post Increment operator)
    // --i (Pre decrement operator)
    // i-- (Post decrement operator)


    int i = 3;

    printf("%d\n" , i++); // use , then increase
    printf("%d\n" , i);
    
    printf("%d\n" , ++i); // increase , then use
    printf("%d\n" , i);

    printf("%d\n" , i--); // decrease , then use
    printf("%d\n" , i);

    printf("%d\n" , --i); // use , then decrease 
    printf("%d\n" , i);






    return 0;
}