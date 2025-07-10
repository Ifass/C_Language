# include<stdio.h>
# include<math.h>

//  Arithematic insruction
int main () {
int  b , c ;
b = c = 1;

int a = 1, b = 2;
int sum = a + b;
int multiply = a * b;

// only y store value of "a - b" 
int x , y = a - b;   

// INVALID EXPRESSION LIST
int a = bc;
int d = b^c;

// VALID EXPRESSION LIST 

int a = b + c;
int e = a* b;
int f = a/b;
int power = pow(b,c);
printf("%d" , power);
return 0;

}
