#include <unistd.h>

/*
ft_putchar: This function will display a character on the standard output.

explanation:
- The function ft_putchar takes a character as a parameter.
- The write function is used to display the character on the standard output.
*/
void ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
ft_putstr: This function will display a string of characters on the standard output.

explanation:
- The function ft_putstr takes a pointer to a character as a parameter.
- After that use the while loop to iterate through the next memory location of the string.
- Inside the loop, use the ft_putchar function to display the character on the standard output.
- It stops when it reaches the null character. (the end of the string)
*/
void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}