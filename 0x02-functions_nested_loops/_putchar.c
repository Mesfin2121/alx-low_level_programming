#include <stdio.h>
#undef _putchar
int _putchar (int c)
{
	register FILE *so = stdout;
	return (putc(c, so));
}
