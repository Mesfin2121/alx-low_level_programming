#include "main.h"
/**
 * length - length of string
 * @s: string
 * Return: int
 */
int length(char *s)
{
	if (*s != '\0')
	{
		return (1 + length(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * compare - compare
 * @s: string
 * @beg: begin
 * @end: end
 * Return: int
 */
int compare(char *s, int beg, int end)
{
	if (s[beg] != s[end])
		return (0);
	else if (beg == end && s[beg] == s[end])
		return (1);
	else if (beg == end - 1 && s[beg] == s[end])
		return (1);
	else
		return (compare(s, beg + 1, end - 1));
}
/**
 * is_palindrome - check is string
 * @s: string
 * Return: int
 */
int is_palindrome(char *s)
{
	int len, beg, end;

	len = length(s);
	beg = 0;
	end = len - 1;

	if (len == 0 || len == 1)
		return (1);
	else
		return (compare(s, beg, end));
}
