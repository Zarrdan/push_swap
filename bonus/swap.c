/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarita <aclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:25:03 by aclarita          #+#    #+#             */
/*   Updated: 2022/01/13 16:49:45 by aclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap(t_stack **head)
{
	t_stack	*first;
	t_stack	*second;

	if (!(*head))
		exit (0);
	first = *head;
	second = (*head)->next;
	first->next = (*head)->next->next;
	second->next = first;
	*head = second;
}

void	sa(t_stack **stack_a)
{
	swap(stack_a);
}

void	sb(t_stack **stack_b)
{
	swap(stack_b);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
}
