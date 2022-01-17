/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:30:00 by jchene            #+#    #+#             */
/*   Updated: 2022/01/10 13:32:17 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/minishell.h"

t_msh	*st_mini(void)
{
	static t_msh	mini;

	return (&mini);
}

t_start	*st_words(void)
{
	static t_start	words;

	if (words.init != 1)
	{
		words.init = 1;
		words.first = NULL;
	}
	return (&words);
}
