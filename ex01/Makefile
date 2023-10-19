CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -g
NAME = phonebook

SOURCES 	:=	main.cpp\
				phonebook.cpp\
				contact.cpp\

INCLUDES	:=	
SOURCE_DIR 	:=	./
OBJECTS_DIR	:=	objects
OBJECTS 	:= 	$(addprefix $(OBJECTS_DIR)/, $(SOURCES:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $^

$(OBJECTS_DIR)/%.o: $(SOURCE_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c -o $@ $<

clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)
		if [ -d "$(OBJECTS_DIR)" ]; then rm -rf $(OBJECTS_DIR); fi

re: fclean all

.PHONY: all clean fclean re