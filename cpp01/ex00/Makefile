CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDES = Zombie.hpp
SRC = main.cpp  newZombie.cpp  randomChump.cpp  Zombie.cpp
OBJ = $(SRC:.cpp=.o)
NAME = zombie

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
%.o: %.cpp $(INCLUDES)
	@$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all