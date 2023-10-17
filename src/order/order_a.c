/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:47:50 by yususato          #+#    #+#             */
/*   Updated: 2023/10/16 14:21:38 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stackA)
{
	int	temp;

	if (stackA->top && stackA->top->prev)
	{
		temp = stackA->top->data;
		stackA->top->data = stackA->top->prev->data;
		stackA->top->prev->data = temp;
		ft_printf("sa\n");
	}
}

void	pa(t_stack *stackA, t_stack *stackB)
{
	int	temp;

	if (stackB->top)
	{
		temp = pop(stackB);
		push(stackA, temp);
	}
	ft_printf("pa\n");
}

void  ra(t_stack *stackA)
{
	t_node *node;

	if (stackA == NULL || stackA->top == NULL || stackA->top == stackA->bottom)
		return;
	node = stackA->top;
	stackA->top = node->prev;
	node->prev = NULL;
	node->next = stackA->bottom;
	stackA->bottom->prev = node;
	stackA->bottom = node;
	ft_printf("ra\n");
}

void  rra(t_stack *stackA)
{
	t_node *node;

	if (stackA == NULL || stackA->top == NULL || stackA->top == stackA->bottom)
		return;
	node = stackA->bottom;
	stackA->bottom = node->next;
	node->next = NULL;
	node->prev = stackA->top;
	stackA->top->next = node;
	stackA->top = node;
	ft_printf("rra\n");
}