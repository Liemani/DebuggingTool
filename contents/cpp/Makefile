NAME				:= libDebuggingTool.a
NAME_TEST			:= test.out

SRCS				:= \
					   toBinary.cpp

SRCS_TEST			:= \
					   main.cpp

OBJS				:= $(SRCS:.cpp=.o)
OBJS_TEST			:= $(OBJS) $(SRCS_TEST:.cpp=.o)

CXX					:= c++
CXXFLAGS			:= -std=c++98 -pedantic-errors -Wall -Wextra -Werror

INCLUDE				:= -I .

LIBRARY				:=

COMPILE				= $(CXX) $(CXXFLAGS) $(INCLUDE) $(DEBUG_OPTION)
LINK				= $(CXX) $(CXXFLAGS) $(INCLUDE) $(DEBUG_OPTION) $(LIBRARY)
AR					= ar rc

RM					:= rm -f



.PHONY:				all debug setdebug clean fclean re
all:				$(NAME)

debug:				clean setdebug $(NAME)
setdebug:
					$(eval DEBUG_OPTION = -g)

clean:
					$(RM) $(OBJS_TEST)
fclean:				clean
					$(RM) $(NAME) $(NAME_TEST)
re:					fclean all



$(NAME):			$(OBJS)
					$(AR) $@ $^
.PHONY:				test
test:				$(OBJS_TEST)
					$(LINK) -o $(NAME_TEST) $^

%.o:				%.cpp
					$(COMPILE) -o $@ -c $<
