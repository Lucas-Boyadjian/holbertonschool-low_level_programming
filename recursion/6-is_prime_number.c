#include "main.h"
#include <stdio.h>

/**
* _prime_helper - Help function
* @n: Number we test
* @number:  Variable diviser
* Return: Return 1 if the input integer is a prime number, otherwise return 0
*/

int _prime_helper(int n, int number)

{
if (n % number == 0)
return (0);

if (number * number > n)
return (1);


return (_prime_helper(n, number + 1));

}

/**
* is_prime_number - Determines if an integer is a prime number.
* @n: Number we test
* Return: Returns 1 if the input integer is a prime number, otherwise return 0
*/

int is_prime_number(int n)

{

if (n < 2)
return (0);

return (_prime_helper(n, 2));
}
