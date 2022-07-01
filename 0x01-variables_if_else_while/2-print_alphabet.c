#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* Write a program that prints the alphabet in lowercase, followed by a new line*/
int main(void){
    char ch;
     char new_ch;
    for(ch = 'A';ch <='Z';ch++){
        new_ch = tolower(ch);
        putchar(new_ch);
    }
    putchar('\n');
    return(0);
    
   
}
