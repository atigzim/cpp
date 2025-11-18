CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = tests.cpp Account.cpp
OBJ = $(SRC:.cpp=.o)
NAME = job

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all