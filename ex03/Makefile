# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/26 07:36:31 by arabefam          #+#    #+#              #
#    Updated: 2025/03/12 17:05:30 by arabefam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	humans
CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98
OBJS		=	$(SRCS:.cpp=.o)
SRCS		=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

all			:	$(NAME)

$(NAME)		:	$(OBJS)
			$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean		:
			rm -f $(OBJS)

fclean		:	clean
			rm -f $(NAME)

re			:	fclean all
