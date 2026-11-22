CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = BUREAUCRAT

SRC = AForm.cpp Bureaucrat.cpp Intern.cpp main.cpp \
	PresidentialPardonForm.cpp RobotomyRequestForm.cpp \
	ShrubberyCreationForm.cpp

HEADERS = AForm.hpp Bureaucrat.hpp Intern.hpp \
		PresidentialPardonForm.hpp RobotomyRequestForm.hpp \
		ShrubberyCreationForm.hpp

OBJ = $(SRC:.cpp=.o)
GenFiles = $(wildcard *_shrubbery)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o :  %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(GenFiles)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean all