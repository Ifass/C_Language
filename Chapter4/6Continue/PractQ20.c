#include<stdio.h>

int main(){
    for(int i=5; i<=50; i++){
         if(i % 2 == 0){
         continue;
       }
       printf("%d\n" , i);
     
    }
    return 0;
}



//Method 2

// #include<stdio.h>

// int main(){
//     for(int i=5; i<=50; i++){
//         if(i % 2 != 0){
//         printf("%d\n" , i);
//        }
//     }
//     return 0;
// }