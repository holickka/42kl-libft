//#include "libft.h"
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	unsigned char	*temp;

	temp = (unsigned char *)s;
	i = 0;
	while (temp[i] && i <= n)
		temp[i++] = 0;
	s = &temp;
//	return temp;
}

#include <stdio.h>
#include <strings.h>

int	main()
{
	int	i;
	int	n;
	int	x[] = {10, 10, 9};
//	char	c[] = "what";

	i = 0;
	n = 2;
	ft_bzero(x, n * sizeof(int));
	while (i <= n)
		printf("%d\n", x[i++]);
}

/*
notes
when n > sizeof (*s)
continue write until segfault
*/
