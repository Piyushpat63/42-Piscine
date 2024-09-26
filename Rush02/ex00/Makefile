SRC				= rush-02.c ft_strncpy.c ft_process_line.c ft_process_zero.c ft_process_thousands.c ft_process_hundreds.c ft_process_tens.c ft_process_units.c ft_strlen.c ft_strdup.c ft_atoi.c ft_strcat.c ft_strcmp.c ft_load_dictionary.c ft_number_to_words.c ft_convert_number_to_words.c ft_solve.c

SRCS			= ${addprefix ${PRE}, ${SRC}}

OBJS			= ${SRCS:.c=.o}

PRE				= ./srcs/

HEAD			= ./includes/

DICT			= ./dicts/

NAME			= rush-02

RM				= rm -f

CC				= gcc

CFLAGS			= -Wall -Wextra -Werror

RES				= numbers.dict numbers.fi.dict

RESS			= ${addprefix ${DICT}, ${RES}}

all:			$(NAME)

.c.o:
				${CC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
				cp ${RESS} ./
clean:
				rm -f $(OBJS)

fclean: clean
				rm -f $(NAME)
				rm -f $(RES)

re: fclean all
