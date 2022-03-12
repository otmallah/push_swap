NAME = push_swap

NAME_B = checker

CC = gcc 


CFLAGS = -Wall -Werror -Wextra

AR = ar -rc

RM = @rm -f

FILES =  push_swap.c stack_a/swap.c stack_a/swap_b.c swap_3_rand.c swap_5_rand.c ft_strcmp.c sort_100_ran.c\
		swap_4_rand.c checker_num.c ft_atoi.c  sort_param.c  index.c handle_err/handle.c

BS = checke_r/checker_otmallah.c checke_r/get_next_line.c checke_r/swap.c checke_r/swap2.c \
	ft_atoi.c checke_r/check.c checke_r/norme.c checke_r/instr.c ft_strcmp.c


# Colors
C_RED = \033[1;31m
C_GREEN = \033[1;32m
C_L_GREEN = \033[1;32m
C_BLUE = \033[1;34m
C_L_BLUE = \033[1;34m
C_WHITE = \033[1;37m
C_RES = \033[0m


all : $(NAME)

$(NAME) : $(FILES)
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)
	@echo "$(C_GREEN)[LIBRARY CREATED!]$(C_RES)"

clean :
	$(RM) $(NAME)
	@echo "$(C_RED)[OBJECT DELETED!]$(C_RES)"

fclean : clean
	$(RM) $(NAME) $(NAME_B)
	@echo "$(C_RED)[LIBFT.A REMOVED!]$(C_RES)"

bonus : $(NAME_B)

$(NAME_B) : $(BS) 	
	$(CC) $(CFLAGS) $(BS) -o $(NAME_B)
	@echo "$(C_L_BLUE)[BONUS CREATED!]$(C_RES)"

re : fclean all

rebonus : fclean bonus