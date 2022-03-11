/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarita <aclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:21:57 by aclarita          #+#    #+#             */
/*   Updated: 2022/01/13 16:01:29 by aclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push(t_stack **src, t_stack **dst)
{
	t_stack	*tmp;

	if (!(*src))
		exit(0);
	tmp = *src;
	*src = (*src)-> next;
	tmp->next = *dst;
	*dst = tmp;
}

void	pa(t_stack **stack_b, t_stack **stack_a)
{
	push(stack_b, stack_a);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
}
