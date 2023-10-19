#include "libft.h"

int	ft_isprint(int a)
{
	if ((a >= 32 && a <= 126) || (a >= 040 && a <= 0176))
		return (1);
	return (0);
}

#include <ctype.h>
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_isprint(010));
}

/*
note
I didnt call octal one by one eg 040-047, 050-057...
bcz itself is invalid when keyed in
*/
