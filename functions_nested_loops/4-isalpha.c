#include "main.h"
#include <ctype.h>
/**
* _isalpha - checks for letter
*
* @c: checks for letter is lowercase or uppercase
*
* Return: (0) true or (1) false
*/
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
