/**
 * main - Entry point of the program
 *
 * Description: Initializes variables and a pointer for further operations
 *              Prints the value of a[2]
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	printf("a[2] = %d\n", *(int *)((char *)p + 24));

	return (0);
}
