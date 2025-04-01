/*
 *Program by Ezike ifunanya.
* Program to prints the lowecase letters of the alphabet(a-z)
 * on 10 separate lines.
 *
 * Returns: 0 on success.
 *
 */


int main(void)
{
	int a;
	char b;

	for(a=1; a<=10; a++)
	{
		for(b='a'; b<='z'; b++)
		{
			putchar(b);
		}
		putchar('\n');
	}
	return(0);
}
