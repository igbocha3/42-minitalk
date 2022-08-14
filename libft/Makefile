SRCS =	ft_strchr.c		\
		ft_atoi.c		\
		ft_printf.c		\
		ft_put_c.c 		\
		ft_put_s.c 		\
		ft_put_p.c		\
		ft_put_d.c		\
		ft_put_u.c		\
		ft_put_x.c		\
		ft_len_d.c		\
		ft_len_x.c		\
		ft_isdigit.c

OBJS = $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS) libft.h
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS)
				ar rcs $(NAME) $(OBJS))

.PHONY:			all clean fclean re