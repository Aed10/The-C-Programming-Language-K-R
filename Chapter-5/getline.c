#include <stdio.h>
/**
 * get_line - Give the length of a line of char.
 *
 * @s: The Input.
 * @lim: Maximum that can Read.(Static)
 * Return: An integer.
 */

int get_line(char s[], int lim)
{
  int c, i;

  for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

