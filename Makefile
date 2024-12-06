NAME = libftprintf.a

CC = cc -c

AR = ar rc

RM = rm -rf

WFLAG = -Wall -Wextra -Werror

SRCS = ft_printf.c \
	ft_utils.c ft_utils2.c \
	print_addr.c print_nbr.c print_unsigned_nbr.c print_char.c print_hex.c print_str.c \
	init_t_format.c  select_act.c flag_check.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(B_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: all

%.o:%.c
	$(CC) $(WFLAG) -c $< -o $@

.PHONY: all clean fclean re
