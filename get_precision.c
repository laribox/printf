#include "main.h"

/**
 * get_precision - precision check
 * @s: passed character after '%'
 * Return: pointer to the precision string (either "*" or numeric value)
 */
char *get_precision(char *s)
{
    if (*s == '*')
    {
        char *pre = (char *)malloc(2); // Allocate memory for "*"
        if (pre != NULL)
        {
            pre[0] = '*';
            pre[1] = '\0';
        }
        return pre;
    }
    else
    {
        int length = 0;
        while (s[length] >= '0' && s[length] <= '9')
            length++;

        char *pre = (char *)malloc(length + 1); // Allocate memory for numeric precision
        if (pre != NULL)
        {
            for (int i = 0; i < length; i++)
                pre[i] = s[i];
            pre[length] = '\0';
        }
        return pre;
    }
}
