CXX = c++
INCLUDES = phonebook.hpp
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INCLUDES)
SRC = main.cpp phonebook.cpp contact.cpp
OBJ = $(SRC:.cpp=.o)
NAME = PHONEBOOK

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all