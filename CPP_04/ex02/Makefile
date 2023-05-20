NAME	=	animal

SRCS	=	Animal.cpp			\
			Cat.cpp				\
			Dog.cpp				\
			Wrong_animal.cpp	\
			Wrong_cat.cpp		\
			Brain.cpp			\
			main.cpp

CC		=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

OBJS	=	$(SRCS:.cpp=.o)

all: 		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(OBJS) $(CXXFLAGS) -o $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all