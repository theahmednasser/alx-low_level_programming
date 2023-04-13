/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number to raise
 * @y: used to raise
 *
 * Return: power of x
 */
int _pow_recursion(int x, int y)
{
	if (y  == 0)
		return (1);
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
