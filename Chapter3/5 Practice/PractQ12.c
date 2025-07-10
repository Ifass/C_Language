#include<stdio.h>
    int main(){
        char ch;
        printf("Enter characher  : ");
        scanf("%c" , &ch);

        if (ch >= 'A' && ch <= 'Z'){
            printf ("Upper Case\n");
        } else if (ch >= 'a' && ch <= 'z'){
            printf("Lower Case\n");
        } 
        else{
            printf("Not English letter\n");
        }
        return 0;
        
    }


    // ch >= 97 or ch >= 'a' skie value