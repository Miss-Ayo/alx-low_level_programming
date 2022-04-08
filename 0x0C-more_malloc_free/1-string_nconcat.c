/**
 * *string_nconcat - concatenates two strings
 * @s1: string src to concatenate into the second one
 * @s2: dest string
 * @n:lenght of the dest string
 *
 * Return: a pointer
 */

#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, i, j;
char *string;

len1 = 0;
len2 = 0;
j = 0;
if (s1 ==  NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (*(s1 + len1) != '\0')
len1++;
while (*(s2 + len2) != '\0')
len2++;

string = malloc((len1 + n + 1) * sizeof(char));
if (n <= len2)
len2 = n;
if (string == NULL)
return (NULL);
for (i = 0; i < (len1 + len2); i++)
{
if (i < len1)
*(string + i) = *(s1 + i);
else
{
*(string + i) = *(s2 + j);
j++;
}
}
*(string + i) = '\0';
return (string);
}
