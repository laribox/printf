  #include "main.h"
  
  /**
   * get_precision - precision check
   * @s: passed character after '%'
   * Return: pointer to the precision string (either "*" or numeric value)
   */
  char *get_precision(const char *s, const char **p)
  {
          if (*s == '*')
          {
                  char *pre;
  
                  pre = (char *)malloc(2);
  
                  if (pre != NULL)
                  {
                          (*p)++;
                          pre[0] = '*';
                          pre[1] = '\0';
                  }
                  return (pre);
          }
          else
          {
                  int length = 0;
                  int i;
                  char *pre;
  
                  while (s[length] >= '0' && s[length] <= '9')
                          length++;
  
                  pre = (char *)malloc(length + 1);
  
                  if (pre != NULL)
                  {
                          for (i = 0; i < length; i++)
                          {
                                  (*p)++;
                                  pre[i] = s[i];
                          }
                          pre[length] = '\0';
                  }
                  return (pre);
          }
  }

/**
 * get_precision_length - precision length
 * @s: passed character after '%'
 * Return: pointer precision length
 */
int get_precision_length(char *s)
{

	int length = 0;

	while (s[length] >= '0' && s[length] <= '9')
		length++;

	return (length);

}
