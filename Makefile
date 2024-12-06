NAME = libftprintf.a

CC = cc -c

AR = ar rc

RM = rm -rf

WFLAG = -Wall -Wextra -Werror

SRCS = flag_check.c ft_printf.c ft_utils.c ft_utils2.c pf_putaddr.c pf_putnbr.c pf_putnbr_unsigned.c init_t_format.c pf_charset.c pf_putchar.c pf_putnbr_hex.c pf_putstr.c select_act.c

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
