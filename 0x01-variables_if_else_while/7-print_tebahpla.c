#include <stdio.h>
/**
* main - Entry point
* Description: 'Prints the alphabet in lowercase and uppercase'
* Return: Always 0 (Success)
*/
int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}

putchar('\n');

return (0);
}
