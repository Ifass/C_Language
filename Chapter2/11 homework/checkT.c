# include<stdio.h>
# include<math.h>

int main(){

    // to check the number is digit or character
    // The following table shows the range of ASCII values
    // A-Z: 65-95
    // a-z: 97-122
    // 0-9: 48-57 

    char ch;
    printf("Enter any character: \n");
    scanf("%c",&ch);
    
    if(ch >= 97 && ch <= 122)
    printf("%c is small letter.\n",ch);

else if(ch >= 65 && ch<= 90)
{
    printf("%c is capital letter.\n",ch);
}
  else if(ch>= 48 && ch<= 57)
  {
    printf("%c is digit.\n",ch);
  }
  else{
    printf("%c is special character.\n",ch);
  }
return 0;    
}