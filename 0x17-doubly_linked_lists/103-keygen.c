#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - finds the biggest number
 *
 * @usrn: username
 * @len: length of username
 * Return: the biggest number
 */
int f4(char *usrn, int len)
{
	int ch;
	int vch;
	unsigned int rand_num;

	ch = *usrn;
	vch = 0;

	while (vch < len)
	{
		if (ch < usrn[vch])
			ch = usrn[vch];
		vch += 1;

