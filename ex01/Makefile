NAME			= PhoneBook

CC				= g++
FLAGS			= -Wall -Wextra -Werror -std=c++98
RM				= rm -rf


FILES	= main Contact PhoneBook

OBJDIR = .objFiles

SRC = $(FILES:=.cpp)
OBJ = $(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))
HEADER = Contact.hpp PhoneBook.hpp

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: %.cpp $(HEADER)
	mkdir -p $(dir $@)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJDIR) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
