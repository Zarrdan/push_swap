/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarita <aclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:38:31 by aclarita          #+#    #+#             */
/*   Updated: 2022/01/13 16:51:12 by aclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate(t_stack **head)
{
	t_stack	*tmp;
	t_stack	*tmp_head;

	if (!(*head))
		exit (0);
	tmp = *head;
	*head = (*head)->next;
	tmp_head = *head;
	while (tmp_head->next)
		tmp_head = tmp_head->next;
	tmp_head->next = tmp;
	tmp_head->next->next = NULL;
}

void	ra(t_stack **stack_a)
{
	rotate(stack_a);
}

void	rb(t_stack **stack_b)
{
	rotate(stack_b);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}
