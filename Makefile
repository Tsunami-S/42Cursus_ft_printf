NAME = libftprintf.a

CC = cc -c

AR = ar rc

RM = rm -rf

WFLAG = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_putaddr_pf.c ft_putnbr_pf.c ft_putnbr_base_pf.c ft_abs.c ft_putchar_pf.c ft_putstr_pf.c select_act.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(B_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

%.o:%.c
	$(CC) $(WFLAG) -c $< -o $@

.PHONY: all clean fclean re
