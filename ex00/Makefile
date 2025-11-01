NAME			=	ex00.out

CXX				=	c++
CXXFLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic

SRCS			=	main.cpp ClapTrap.cpp

OBJS_PATH		=	objs/
OBJS			=	$(SRCS:%.cpp=objs/%.o)


$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJS_PATH)%.o:	%.cpp
	@mkdir -p $(OBJS_PATH)
	$(CXX) $(CXXFLAGS) -c $< -o $@

all:	$(NAME)

va:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)


clean:
	rm -rf $(OBJS_PATH)

fclean:
	rm -rf $(OBJS_PATH)
	rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re va
