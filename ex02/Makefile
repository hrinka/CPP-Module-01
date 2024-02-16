NAME			= Account

CC				= g++
FLAGS			= -Wall -Wextra -Werror -std=c++98
RM				= rm -rf


FILES	= tests Account

OBJDIR = .objFiles

SRC = $(FILES:=.cpp)
OBJ = $(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))
HEADER = Account.hpp

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
