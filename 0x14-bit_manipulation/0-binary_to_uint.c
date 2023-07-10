#include "main.h"

/**
 * binary_to_uint - The main function to convert a binary number
 * to a unsigned integer
 * @b: arg pointer to the binary string
 * Return: (unsigned integer converted number)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bas = 1, results = 0, length = 0;

	if (b == NULL)
		return (0);

	while (b[length])
		length++;

	while (length)
	{
		if (b[length - 1] != '0' && b[length - 1] != '1')
			return (0);

		if (b[length - 1] == '1')
			results += bas;
		bas *= 2;
		length--;
	}
	return (results);
}
