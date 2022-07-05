#include <stdio.h>                                                                                  

/**                                                                                                 
 * Write a program that prints _putchar, followed by a new line                                                                        
 * Return: 0                                                                                        
 */                                                                                                 
int main(void)                                                                                      
{                                                                                                   
        char value[] = "_putchar";                                                              

        for (int i = 0; value[i] != '\0'; i++)                                                          
        {                                                                                           
                printf("%c", value[i]);                                                             
        }                                                                                           

        printf("\n");                                                                               

        return (0);                                                                                 
}
