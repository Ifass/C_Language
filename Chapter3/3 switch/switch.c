 #include<stdio.h>

 int main (){
    int day; // jan- 1, feb- 2, mar- 3 ....

    // we can use integer and character as a constant
    printf ("Enter day(1-7) :");
    scanf("%d" , &day);

    switch (day) {
        case 1 : printf("monday");
                 break; 
        case 2 : printf("Tuesday");
                 break; 
        case 3 : printf("Wednesday");
                 break; 
        case 4 : printf("Thursday");
                 break; 
        case 5 : printf("Friday");
                 break; 
        case 6 : printf("Saturday");
                 break; 
        case 7 : printf("sunday");
                 break; 
        default : printf("not a valid input");
    }

    return 0;
 }