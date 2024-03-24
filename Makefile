NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
objects =   ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
			ft_strlen.o \
			ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o \
			ft_toupper.o ft_tolower.o \
			ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o \
			ft_strnstr.o ft_atoi.o \
			ft_calloc.o ft_strdup.o \
			ft_substr.o ft_strjoin.o \
			ft_strtrim.o ft_split.o \
			ft_itoa.o \
			ft_strmapi.o ft_striteri.o \
			ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o \
			ft_strlcpy.o ft_strlcat.o
# bonus_objects = ft_lstnew_bonus.o ft_lstadd_front_bonus.o ft_lstsize_bonus.o ft_lstlast_bonus.o \
# 			ft_lstadd_back_bonus.o ft_lstdelone_bonus.o ft_lstclear_bonus.o \
# 			ft_lstiter_bonus.o ft_lstmap_bonus.o
$(NAME) : $(objects)
	ar cr $(NAME) $(objects)
# bonus : $(bonus_objects)
# 	ar cr $(NAME) $(bonus_objects)
ft_isalpha.o : ft_isalpha.c
ft_isdigit.o : ft_isdigit.c
ft_isalnum.o : ft_isalnum.c ft_isalpha.o ft_isdigit.o libft.h
ft_isascii.o : ft_isascii.c
ft_isprint.o : ft_isprint.c
ft_strlen.o : ft_strlen.c
ft_memset.o : ft_memset.c
ft_bzero.o : ft_bzero.c
ft_memcpy.o : ft_memcpy.c
ft_memmove.o : ft_memmove.c ft_memcpy.o libft.h
ft_strlcpy.o : ft_strlcpy.c ft_memmove.o libft.h
ft_strlcat.o : ft_strlcat.c libft.h
ft_toupper.o : ft_toupper.c
ft_tolower.o : ft_tolower.c
ft_strchr.o : ft_strchr.c
ft_strrchr.o : ft_strrchr.c ft_strlen.o libft.h
ft_strncmp.o : ft_strncmp.c
ft_memchr.o : ft_memchr.c
ft_memcmp.o : ft_memcmp.c
ft_strnstr.o : ft_strnstr.c ft_strlen.o libft.h
ft_atoi.o : ft_atoi.c
ft_calloc.o :ft_calloc.c ft_bzero.o libft.h
ft_strdup.o : ft_strdup.c ft_strlen.o libft.h
ft_substr.o : ft_substr.c ft_strlen.o libft.h
ft_strjoin.o : ft_strjoin.c ft_strlen.o libft.h
ft_strtrim.o : ft_strtrim.c ft_strlen.o ft_calloc.o libft.h
ft_split.o : ft_split.c ft_calloc.o ft_substr.o libft.h
ft_itoa.o : ft_itoa.c ft_calloc.o libft.h
ft_strmapi.o : ft_strmapi.c ft_strlen.o ft_calloc.o
ft_striteri.o : ft_striteri.c
ft_putchar_fd.o : ft_putchar_fd.c
ft_putstr_fd.o : ft_putstr_fd.c ft_strlen.o libft.h
ft_putendl_fd.o : ft_putendl_fd.c ft_strlen.o libft.h
ft_putnbr_fd.o : ft_putnbr_fd.c

# ft_lstnew_bonus.o : ft_lstnew_bonus.c
# ft_lstadd_front_bonus.o : ft_lstadd_front_bonus.c
# ft_lstsize_bonus.o : ft_lstsize_bonus.c
# ft_lstlast_bonus.o : ft_lstlast_bonus.c
# ft_lstadd_back_bonus.o : ft_lstadd_back_bonus.c ft_lstlast_bonus.o
# ft_lstdelone_bonus.o : ft_lstdelone_bonus.c
# ft_lstclear_bonus.o : ft_lstclear_bonus.c ft_lstdelone_bonus.o
# ft_lstiter_bonus.o : ft_lstiter_bonus.c
# ft_lstmap_bonus.o : ft_lstmap_bonus.c ft_lstnew_bonus.o ft_lstlast_bonus.o


all : $(NAME)
clean :
	-rm $(objects) $(bonus_objects)
fclean : clean
	-rm $(NAME)
re : fclean all