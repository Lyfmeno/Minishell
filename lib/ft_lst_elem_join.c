/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_elem_join.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 17:19:35 by jchene            #+#    #+#             */
/*   Updated: 2022/01/10 15:23:10 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/minishell.h"

int	ft_lst_elem_join(t_start *lst, t_elem *start, t_elem *stop)
{
	int		full_len;
	char	*new_word;
	t_elem	*tmp;
	t_elem	*new_elem;

	full_len = ft_lst_join_size(start, stop);
	new_word = (char *)malloc(sizeof(char)
			* (ft_lst_join_size(start, stop) + 1));
	if (!new_word)
		return (-1);
	//WORK IN PROGRESS HERE
	tmp = lst->first;
	while (tmp->next != start);
}
