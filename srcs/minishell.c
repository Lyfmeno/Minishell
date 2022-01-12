/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:53:27 by hlevi             #+#    #+#             */
/*   Updated: 2022/01/12 13:55:40 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/minishell.h"

int	main(int argc, char **argv, char **envp)
{
	t_env	*env;
	char	*test;

	(void)argc;
	(void)argv;
	env = NULL;
	env = parse_env(envp);
	print_env(env);
	test = ft_strdup(get_env("SHELL", env));
	printf("\n\ntest recup shell = %s\n\n", test);
	while (1)
	{
		st_mini()->line = readline("$> ");
		//parsing_base();
		free(st_mini()->line);
	}
	return (0);
}
