#include "main.h"
#include <stdio.h>
/**
<<<<<<< HEAD
 * print_array - check the code for Holberton School students.
 * @a: pointer int type
 * @n: is a int variable
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int i, inte;

for (i = 0; i < n; i++)
{

inte = *(a + i);

printf("%d", inte);

if (i != n - 1)
printf(", ");
}

printf("\n");
}
=======
 * print_array - display array
 * @a:integer
 * @n:integer
 *Return:void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
		if (i < (n - 1))
		{
		printf(", ");
		}
	}
	printf("\n");
}
>>>>>>> 82d08d3c3d65853d2104c654327bec941e872644
