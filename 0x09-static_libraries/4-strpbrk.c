#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: always 0 seccess
 */
char *_strpbrk(char *s, char *accept)
{
                int j;

                while (*s)
                {
                        for (j = 0; accept[j]; j++)
                        {
                        if (*s == accept[j])
                        return (s);
                        }
                s++;
                }

        return ('\0');
}
