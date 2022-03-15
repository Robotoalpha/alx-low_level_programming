#include "main.h"
/**
 * function _abs-calcul la valeur absolue
 * d'un entier 
 *@argument de _abs est 'n'
 * Return value : this function return always
 *as value 0 or possitive value.
 */
int _abs(int n)
{
int valeurAbsolue;
if (n > 0)
{
valeurAbsolue = n;
return (valeurAbsolue);
}
else if (n == 0)
{
valeurAbsolue = 0;
return (valeurAbsolue);
}
else
{
valeurAbsolue = n * (-1);
return (valeurAbsolue);
}
}


