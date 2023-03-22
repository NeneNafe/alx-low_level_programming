#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * positive_or_negative - Prints if number is positive, zero or negative
 * @i: Integer
 * Return: 0
 *
 */

void positive_or_negative(int i)
{

if (i > 0)
printf("%d is positive\n", i);
else if (i == 0)
printf("%d is zero\n", i);
else
printf("%d is negative\n", i);

}
