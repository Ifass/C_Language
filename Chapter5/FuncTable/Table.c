#include<stdio.h>
 
void printTable(int n);

int main(){
    int n;
    printf("enter the number :");
    scanf("%d" , &n);

    printTable(n);
}


void printTable(int n){
    for(int i=1; i<=10;  i++){
       printf("%d\n" , n*i);
    }
}