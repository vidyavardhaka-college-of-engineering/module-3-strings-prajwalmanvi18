// Fill in the missing code in the below sample code which finds the length of the given string and prints result.
//Instructions:-
// 1)Read a string from the standard input device
// 2) using loop calculate the length of string 
// 3) print the length

//Expected input & output:-
//Enter a string: Vidyavardhaka
//The length of string = 13

#include <stdio.h>
int main()
{
 
    int i,len;
    char str[50];
    printf("Enter a string: ");
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++);
    len=i;
       printf("The length of string = %d",len );
       //Complete the missing code in result printing statement
    return 0;
}
