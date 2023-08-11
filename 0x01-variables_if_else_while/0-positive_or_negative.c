#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main -deternies if a number is positive,negative or zero
 *
 * *Reteurn: Always 0 (success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n=and() -RAND_MAX/2;
	if (n>0)
	{
		printf("%d id poditive\n", n);
	}
	else if(n==0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return(0);
}

	
