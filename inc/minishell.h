/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <gade-oli@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:25:42 by gade-oli          #+#    #+#             */
/*   Updated: 2024/10/29 23:31:23 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

#include "../libft.h"

typedef	struct s_shell
{
	t_env	env;
}	t_shell;

typedef	struct s_env
{
	char	*pwd;
	int		status;
}	t_env;


// parser.c
t_list	*parser(t_env env, char **input);

# endif
