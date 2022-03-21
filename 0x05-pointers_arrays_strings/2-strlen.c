#include "main.h"
/**
 *_strlen - finds and ouputs the lenth of a string.
 *@s: pointer to string.
 *
 *Return: lengh of a string.
 */
 int _strlen(char *s)
 {
int i;
        
i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
