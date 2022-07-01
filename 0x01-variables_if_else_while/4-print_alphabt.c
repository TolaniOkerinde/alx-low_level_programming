#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.*/
int main(void){
    char ch;
    char lower_ch;
    char upper_ch;
    for (ch='A';ch<='Z';ch++){
        if(ch=='E' || ch=='Q'){
           continue;
        }
        else{
        lower_ch = tolower(ch);
        
        putchar(lower_ch);
        }
            
    }
    putchar('\n');
    return(0);
}
