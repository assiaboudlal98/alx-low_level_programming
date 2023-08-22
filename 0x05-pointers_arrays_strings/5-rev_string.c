#include "main.h"

/**
 * rev_string - reserve a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
 */

void rev_string(char *s)
{       
        int l, i;
        char temp;
        
        /*find string length without null char*/
        for (l = 0; s[l] != '\0'; ++1)
                ;
        /*swap the string by looping to half the string*/
        for (i = 0; i< l / 2; i++)
        {       
                temp = s[i];
                s[i] = s[l - 1 - 1]; /*-1 because the array starts from 0*/
                s[l - 1 - i] = temp;
	}
}