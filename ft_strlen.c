#include "libft.h"

unsigned long	ft_strlen(const char *s)
{
	unsigned long	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char *mychar = "string";
	printf("%lu\n", strlen(mychar));
}
*/
/*
size_t = unsigned int type
*/
