/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarita <aclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:29:55 by aclarita          #+#    #+#             */
/*   Updated: 2022/01/12 18:12:10 by aclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	init_stack(char **argv, t_stack **head)
{
	int	j;

	j = 1;
	*head = create(ft_atoi(argv[j++]));
	while (argv[j])
	{
		add_list_back(ft_atoi(argv[j]), *head);
		j++;
	}
}
