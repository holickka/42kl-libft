#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned long	i;
	unsigned char	*tempdest;
	unsigned char	*tempsrc;

	tempdest = (unsigned char *)dest;
	tempsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		tempdest[i] = tempsrc[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	char dest[10] = "abcdefghi";
	char src[] = "whae";
	int	n;

	n = 3;
	ft_memcpy(dest, src, n);
	printf("%s\n", dest);
}
/*
 |notes|
 copy n bytes from src to dest
 will overwrite what is in dest up to n
 restrict is for note to compiler that dest and src
 if dest is empty, return dest
 does not handle overflow, will segfault

 *restrict is only to tell compiler that dest and src
 should not overlap
 */
