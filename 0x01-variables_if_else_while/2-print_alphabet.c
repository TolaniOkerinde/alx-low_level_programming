#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *main - Prints the alphabet in lowercase
 *
 *Return: 0 if success
 **/
int main(void){
    char ch;
    for(ch = 'a';ch <='z';ch++){
        putchar(ch);
    }
    putchar('\n');
    return(0);
    
   
}
