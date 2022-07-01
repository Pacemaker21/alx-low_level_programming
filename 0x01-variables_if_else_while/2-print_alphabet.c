#include <stdio.h>
/**
 * main - Entry point 
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int ch;
	clrscr();
	for  (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('/n');
	getch();
}
