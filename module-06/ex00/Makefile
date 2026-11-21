CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = convert
SRC = main.cpp
HEADERS = 
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean clean all

.PHONY: re clean fclean all