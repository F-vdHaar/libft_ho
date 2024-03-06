# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvon-der <fvon-der@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/06 17:37:23 by fvon-der          #+#    #+#              #
#    Updated: 2024/03/06 21:55:00 by fvon-der         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#  Use cc as the default compiler
CC = cc
# Compiler flags with the include directory specified (I.)
CFLAGS = -Wall -Wextra -Werror -I.
# Header file dependencies
DEPS = libft.h
# Executable name
NAME = libft
# Library file
LIBRARY = libft.a
# Collect all source files
SRCS = $(wildcard *.c)
# Generate corresponding object files
OBJS = $(SRCS:.c=.o)

# Phony targets
.PHONY: all clean fclean re

# Default target
all: $(LIBRARY)

# Rule to build the library
$(LIBRARY): $(OBJS)
	ar rcs $@ $^

# Rule to build the executable  , unistd.h link not necessary
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to compile source files into object files
# The .o file depends upon the .c version of the file and the .h files included in the DEPS macro
#  to generate the .o file,  to compile the .c file using the compiler defined in the CC macro.
#  -c: Indicates compilation into an object file.
#  -o $@: Specifies the output file name, named on the left side of the :, $<: Represents the first prerequisite (the source file).
%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up generated files
clean:
	rm -f $(OBJS) $(LIBRARY)

# Remove all generated files and the executable
fclean: clean
	rm -f $(NAME)

# Rebuild the project
re: fclean all