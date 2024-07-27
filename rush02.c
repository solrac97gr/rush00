#include "ft_putchar.c"

void rush(int x, int y)
{
    if (x <= 0 || y <= 0){
        write(1,"Negative numbers and 0 value are not allowed",45);
    }

	ft_putchar(x,y);
}
