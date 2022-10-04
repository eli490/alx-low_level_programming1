#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int position;

if (size == 0)
{
return (NULL);
}

/*Define values with malloc*/
buffer = (char *) malloc(size * sizeof(c));

if (buffer == 0)
{
return (NULL);
}

else
{
position = 0;
while (position < size) /*while for array*/
{
*(buffer + position) = c;
position++;
}

return (buffer);
}

}
