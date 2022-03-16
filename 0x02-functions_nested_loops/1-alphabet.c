#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Return = Always 0 (Success)
 */
void print_alphabet(void)

{
char ch;

_putchar ("Alphabets from a - z are: \n");
for (ch = 'a'; ch <= 'z'; ch++)

{

_putchar ("%c\n", ch);

}

return 0;

}
