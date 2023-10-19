#include "libft.h"

int	ft_isalnum(int a)
{
	if ((a >= 060 && a <= 071) || (a >= 101 && a <= 132) ||
		(a >= 141 && a <= 172) || (a >= 48 && a <= 57) ||
		(a >= 65 && a <= 90) || (a >= 97 && a <= 122))
		return (1);
	return (0);
}

#include <ctype.h>
#include <stdio.h>

int	main()
{
	printf("%d\n", isalnum(0));
}
