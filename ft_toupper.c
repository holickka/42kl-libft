#include "libft.h"

int	ft_toupper(int c)
{
	int i;

	i = 0;
	if (c >= 97 && c <= 122)
		c -= 32;
	else if (c >= 0141 && c <= 0172)
		c -= 76;
	return (c);
}


#include <stdio.h>
#include <ctype.h>

int	main()
{
	printf("%d\n", toupper(0172));
}
