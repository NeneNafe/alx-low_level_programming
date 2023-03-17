#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Prints numbers of base sixteen
 * Return: Always 0 (Success)
 *
 */

int main(void)

{

int n;
char low;

for (n = '0'; n <= '9'; n++)
putchar(n);

for (low = 'a'; low <= 'f'; low++)
putchar(low);
putchar('\n');

return (0);

}
