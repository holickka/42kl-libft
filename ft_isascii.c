#include "libft.h"

int	ft_isascii(int a)
{
	if ((a >= 000 && a <= 0177) || (a >= 0 && a <= 127))
		return (1);
	return (0);
}

#include <stdio.h>
#include <ctype.h>

int	main()
{
	printf("%d\n", isascii(0177));
}
