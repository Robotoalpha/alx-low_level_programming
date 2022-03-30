#include "main.h"
#include <string.h>
/**
  * wildcmp - compares two strings and returns 1 
  *if the strings can be considered identical, 
  *otherwise return 0.
  *@s1: pointer to string.
  *@s2: pointer to other string
  *
  *Return: 1 if the strings can be considered identical
  *otherwise return 0.
  */
int wildcmp(char *s1, char *s2)
{
      int i = 0;
      int j = 0;
      char ch1,ch2;
      s1 = &ch1, s2 = &ch2;
      s1 = NULL;
      s2 = NULL;
       
       if (s1[i] == s2[j])
       {
             if ((s1[i] != '\0') &&  (s2[j] != '\0'))
             {
                return 1;
                i++;
                j++;
             }
       }
        else
        {
                 return 0;
        }
  return (wildcmp(s1, "*"));
}

