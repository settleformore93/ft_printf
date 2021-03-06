# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssettle <ssettle@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 13:48:05 by ssettle           #+#    #+#              #
#    Updated: 2019/09/11 17:34:23 by ssettle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = srcs/dispatch_conv.c \
	srcs/dispatch_table.c \
	srcs/ft_printf.c \
	srcs/options.c \
	srcs/parse.c \
	srcs/val_flag.c \

CONVERT = conversions/convert_char.c \
			conversions/convert_percent.c \
			conversions/convert_str.c  \
			conversions/convert_int.c \
			conversions/convert_octal.c \
			conversions/convert_hex.c \
			conversions/convert_upper_hex.c \
			conversions/convert_pointer.c \
			conversions/convert_uint.c \

TOOLS = tools/pf_atoi.c \
		tools/pf_putchar.c \
		tools/pf_strdup.c \
		tools/pf_strcpy.c \
		tools/pf_strjoin.c \
		tools/pf_putstr.c \
		tools/pf_strsub.c \
		tools/pf_memset.c \
		tools/pf_strncpy.c \
		tools/pf_itoa.c \
		tools/pf_special_itoa.c \
		tools/pf_append.c \
		
OBJ = *.o

INC = includes/ft_printf.h

CC = gcc

CFLAGS = -Wall -Werror -Wextra -g

all: $(NAME)

$(NAME):
	@echo "\033[32mCreating library...\033[0m"
	@$(CC) $(CFLAGS) -c $(SRCS) $(CONVERT) $(TOOLS) -I $(INC)
	@ar -rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@echo "\033[33mCleaning objects...\033[0m"
	@/bin/rm -rf $(OBJ)

fclean: clean
	@echo "\033[33mCleaning objects and library...\033[0m"
	@/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re test