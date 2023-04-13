/**
 * _strlen_recursion - returns the length of a string
 * @s: string to return its length
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int count;

	if (*s != '\0')
	{
		s++;
		count = _strlen_recursion(s);
		return (count + 1);
	}
	return (0);
}
