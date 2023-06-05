NAME = fixed

SRCS	=	main.cpp	 	\
			Fixed.cpp
			
CC		=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

OBJS	=	$(SRCS:.cpp=.o)

all: 		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(OBJS) $(CXXFLAGS) -o $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all


# CFLAGS = -Wall -Wextra -Werror

# all: $(NAME)

# %.o : %.cpp
#     c++ $(CFLAGS) -g3 -fsanitize=address -std=c++98 -c $< -o $@

# $(NAME):
#     c++ $(CFLAGS) -g3 -pedantic -fsanitize=address -std=c++98 ./main.cpp ./Fixed.cpp -o $@

# clean:
#     rm -rf  $(NAME)

# fclean: clean
#     rm -rf  $(NAME)

# re: clean fclean all
