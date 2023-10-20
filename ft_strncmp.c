// #include "libft.h"
#include <stdlib.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n )
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	printf("%d\n", ft_strncmp("banana", "baza", 0));
}

