#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int				ft_isalpha(int a);
int				ft_isdigit(int b);
int				ft_isalnum(int c);
int				ft_isascii(int d);
int				ft_isprint(int e);
unsigned long	ft_strlen(const char *f);
void			*ft_memset(void *h, int i, unsigned long j);
void			bzero(void *s, size_t n);
void			*memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t len);
size_t			ft_strlcpy(char *dest, const char *src, size_t n);





#endif
