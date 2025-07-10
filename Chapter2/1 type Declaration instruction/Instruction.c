# include<stdio.h>

// valid statement 
int main(){
    int a = 22;
    int b = a;
    int c = b * 6;
    int d = 1, e; 

//  invalid statement
int oldage = 22;
int newage = oldage + years;   // ERROR:- "year" must be declared first
int years = 2;  

// invalid statement 
// we can't do "use & declare" in one line 
int x = y = z = 4;


return 0;

}