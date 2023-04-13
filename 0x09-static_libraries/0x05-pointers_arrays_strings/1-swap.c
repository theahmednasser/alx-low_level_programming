/**
 * swap_int - updates the value of a pointer to 98
 * @a: a pointer to an int
 * @b: a p
 * Return: void ALWAYS
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
