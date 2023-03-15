#include <stdio.h>

/**
 * get_float - get float from the user.
 *
 * @pn: pointer.
 *
 * Return: Nothing
 */
int get_float(float *pn)
{
	float dec = 0;
	int c, sign;
	int power = 1;
	float tmp = 0;

	while ((c = getchar()) == ' ' || c == '\n' || c == '\t')
		; /*Skip white spacces.*/
	sign = 1;
	if (c == '+' || c == '-') /*Record Sign*/
	{			
		sign = (c == '+') ? 1 : -1;
		c = getchar();
	}
	for (*pn = 0; c >= '0' && c <= '9'; c = getchar())
		*pn = 10* *pn + c - '0';

	if( c == '.') /*If we reached the decimal point save next digit*/
		c = getchar();
	while (c >= '0' && c <= '9')  /*Decimal part of a number*/
	{	
		power *= 10;
		tmp = (tmp + (c - '0')) / power;
		dec += tmp;
		tmp = 0;
		c = getchar();
	}
	*pn += dec;
	*pn *= sign;
	if(c != EOF)
		ungetc(c, stdin);	
	return (c);
}
int main()
{
	float n;
	get_float(&n);
	printf("number n %g\n", n);
	return 0;
}

