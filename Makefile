COMPILE = cc

FLAGS = -Wall -Wextra -Werror

NAME = myprogram

SOURCES = main.c ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd

OBJECTS = $(SOURCES: .c=.o)

all: $(NAME)

$(NAME): libft.a
	$(COMPILE) $(FLAGS) -o $@ libft.a

libft.a: $(OBJECTS)
	ar -rcs libft.a $(OBJECTS)

%.o: %.c
	$(COMPILE) -c $< -o $@

clean:
	rm -f &(OBJECTS)

fclean: clean
	rm -f $(NAME)
