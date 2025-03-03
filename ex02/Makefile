# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/26 07:36:31 by arabefam          #+#    #+#              #
#    Updated: 2025/03/03 09:08:53 by arabefam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	isThisBrain
CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra
SRCS		=	main.cpp
OBJS		=	$(SRCS:.cpp=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS)
			$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean		:
			rm -f $(OBJS)

fclean		:	clean
			rm -f $(NAME)

re			:	fclean all
