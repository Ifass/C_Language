#include<stdio.h>
void namaste();
void bonjour();

int main(){
     printf("Enter 'f' for French or 'i' for indian : ");
     char ch;
     scanf("%c" , &ch);

     if(ch == 'i'){
        namaste();
     } else if(ch == 'f'){
        bonjour();
     } else {
        printf("Wrong input!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
     }

}

void namaste(){
     printf ("\nNamaste!!\n");
}

void bonjour(){
    printf("\nBonjour!!\n");
}

