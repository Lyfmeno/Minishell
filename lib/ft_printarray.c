/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printarray.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:44:22 by hlevi             #+#    #+#             */
/*   Updated: 2022/03/01 17:48:30 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/minishell.h"

void	ft_printarray(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		printf("tab[%d]%s\n", i, array[i]);
		i++;
	}
	printf("tab[%d]%s\n", i, array[i]);
}
