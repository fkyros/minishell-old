/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <gade-oli@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:25:42 by gade-oli          #+#    #+#             */
/*   Updated: 2024/11/19 19:36:28 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "../megalibft/libft.h"
# include "automaton.h"

# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <signal.h>

// exit status
# define OK 0
# define NOT_EXECUTABLE 126
# define NOT_FOUND 127
# define SIGNAL_OCCURRED 128

typedef enum e_states 
{
	PIPE,
	EMPTY
} t_states;

typedef	struct s_env
{
	char	*pwd;
	int		status;
}	t_env;

typedef	struct s_shell
{
	t_env	env;
}	t_shell;

typedef	struct s_command
{
	char	**comm_params;
}	t_command;

// src/parser/lexer.c

/**
 * Given the raw input of the user, returns a valid token as a char* 
 * or NULL is the encountered piece is invalid.
 * 
 * Like a get_next_line, but for tokens. Called each time by the Syntactic.
 */
char	*lexer(char *input);

// src/parser/parser_utils.c
int		is_space(char c);

# endif
