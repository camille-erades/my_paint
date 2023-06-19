##
## EPITECH PROJECT, 2022
## task01
## File description:
## makefile
##

SRC	=	src/my_paint.c \
		src/closed.c \
		src/destroy_all.c \
		src/framebuffer_create.c \
		src/framebuffer_destroy.c \
		src/my_draw_square.c \
		src/my_put_pixel.c \
		src/prepare_all.c \
		src/window.c \
		src/colors.c \
		src/pensize.c \
		src/change_shape.c \
		src/newfile.c \
		src/savefile.c \
		src/openfile.c \
		src/prepbutton.c \
		src/button_status.c \
		src/filebutton.c \
		src/helpbutton.c \
		src/editbutton.c \
		src/hiders.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_paint

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) -Iinclude  -lcsfml-graphics -lcsfml-system \
		-lcsfml-window -lm

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re:		fclean all

debug: fclean $(OBJ)
		gcc -o $(NAME) $(OBJ) -Iinclude  -lcsfml-graphics -lcsfml-system \
		-lcsfml-window -lm
