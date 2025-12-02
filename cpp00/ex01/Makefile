CXX = c++
INCLUDES = phonebook.hpp contact.hpp
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 
SRC = main.cpp phonebook.cpp contact.cpp
OBJ = $(SRC:.cpp=.o)
NAME = PHONEBOOK

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDES)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
.PHONY: all clean fclean re
