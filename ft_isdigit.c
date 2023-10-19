#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= 060 && c <= 071) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}

#include <stdio.h>
#include <ctype.h>

int	main()
{
	printf("%d\n", ft_isdigit(57));
}
