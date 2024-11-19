/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-oli <gade-oli@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:36:53 by gade-oli          #+#    #+#             */
/*   Updated: 2024/11/09 14:08:08 by gade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int main(void)
{
	char 	*input;
	char	**command;

	while (1)
	{
		input = readline("$ ");
		command = ft_split(input, ' ');	
		free(input);
		print_matrix(command);
		free_matrix(command);
	}
	return (0);
}
