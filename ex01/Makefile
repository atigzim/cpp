
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++11
SRC = main.cpp PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)
NAME = PHONEBOOK

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
