/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <jchene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:02:25 by hlevi             #+#    #+#             */
/*   Updated: 2021/11/23 16:54:33 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/minishell.h"

t_msh	*mini(void)
{
	static t_msh	mini;

	return (&mini);
}

t_start	*words(void)
{
	static t_start	words;

	if (words.init != 1)
	{
		words.init = 1;
		words.first = NULL;
	}
	return (&words);
}
