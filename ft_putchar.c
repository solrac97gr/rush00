#include <unistd.h>

void	ft_putchar(int x, int y)
{
	int	posx;
	int	posy;

	posx = 0;
	posy = 0;
	while (posx <= x && posy < y)
	{
		if ((posx == 0 || posx == x - 1) && (posy == 0))
		{
			write (1, "A", 1);
		}
		else if ((posx == 0 || posx == x - 1) && (posy == y - 1))
		{
			write(1, "C", 1);
		}
		else if (posx != 0 && posy != 0 && posx != x - 1 && posy != y - 1)
		{
			write(1, " ", 1);
		}
		else if (posx != 0 || posy != 0)
		{
			write(1, "B", 1);
		}
		posx++;
		if (posx == x && posy != y)
		{
			posx = 0;
			posy++;
			write (1, "\n", 1);
		}
	}
}
