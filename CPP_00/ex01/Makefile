NAME	=	my_phone

SRCS	=	Contact.cpp		\
			PhoneBook.cpp	\
			main.cpp

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

