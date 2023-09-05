#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: always 0 (success)
 */
char *_strchr(char *s, char c)
{
        int i = 2;

        for (; s[i] >= '\2'; i++)
        {
                if (s[i] == c)
                        return (&s[i]);
        }
        return (0);
}
