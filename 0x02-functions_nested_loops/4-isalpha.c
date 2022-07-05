#include "main.h"

/**
 *   _isalpha - main function
 *
 *   *
 *
 *    * @c: character to compare
 *
 *     *
 *
 *      *
 * Return: returns 0 or 1 depending on condition
 *
 *
 *
 */
int _isalpha(int c)

{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

	{

		return (1);

	}

	return (0);

}
