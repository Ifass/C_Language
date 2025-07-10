#include<stdio.h>
 
void calculate(float value);

int main(){
    float value = 100;
    calculate(value);
    printf("%f\n" , value);

    return 0;
    
}

void calculate(float value){
    value = value + (0.18 * value);
    printf("%f\n" , value);
}

