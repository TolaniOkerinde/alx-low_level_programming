#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

        /* for a positive condition */

	if (n>0) 
		printf("%d is positive/n",n);
	else if (n<0)  /* for a negative condition */
        	printf("%d is negative/n",n);
	else /* for a zero condition */
		printf("%d is zero/n",n);
	 
	/* your code goes there */
	return (0);
}
