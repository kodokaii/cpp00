NAME 		= phonebook

CCPP		= g++
RM			= rm -f
CLONE 		= git clone --depth=1

CPPFLAGS	+= -Wall -Wextra -Werror -std=c++98
CPPLINKS	=

KDO			= kdolib
KDOLIB		= $(KDO)/kdolib.a

SRC 		= Contact.cpp\
			  main.cpp\
			  PhoneBook.cpp

OBJ 		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(KDOLIB) $(OBJ)
	$(CCPP) $(CPPFLAGS) -o $(NAME) $(OBJ) $(KDOLIB) $(CPPLINKS)

$(KDOLIB): $(KDO)
	$(MAKE) -C $(KDO)

$(KDO):
	$(CLONE) https://github.com/kodokaii/kdolib_cpp.git $(KDO)

%.o: %.cpp
	$(CCPP) $(CPPFLAGS) -c $< -o $@

clean:
	if [ -d "$(KDO)" ]; then $(MAKE) clean -C $(KDO); fi
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(KDOLIB)
	$(RM) $(NAME)

clear: fclean
	$(RM) -r $(KDO)

re: fclean all

fast: fclean
	$(MAKE) -j$$(nproc)

.PHONY:		all clean fclean clear re
