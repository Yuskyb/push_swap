/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:27:16 by yususato          #+#    #+#             */
/*   Updated: 2023/10/04 14:46:01 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack *stackB)
{
	int	temp;

	if (stackB->top && stackB->top->prev)
	[
		temp = stackB->top->data;
		stackB->top->data = stackA->top->prev->data;
		stackB->top->prev->data = temp;
		ft_printf("sb\n");
	]
}

void	pb(t_stack *stackA, t_stack *stackB)
{
	int	temp;

	if (stackA->top)
	{
		temp = pop(stackA);
		push(stackB, temp);
		ft_printf("pb\n");
	}
}

void  rb(t_stack *stackB)
{
	t_node *node;

	if (stackB == NULL || stackB->top == NULL || stackB->top == stackB->bottom)
		return;
	node = stackB->top;
	stackB->top = node->prev;
	node->prev = NULL;
	node->next = stackB->bottom;
	stackB->bottom->prev = node;
	stackB->bottom = node;
	ft_printf("rb");
}

void  rrb(t_stack *stackB)
{
	t_node *node;

	if (stackB == NULL || stackB->top == NULL || stackB->top == stackB->bottom)
		return;
	node = stackB->bottom;
	stackB->bottom = node->next;
	node->next = NULL;
	node->prev = stackB->top;
	stackB->top->next = node;
	stackB->top = node;
	ft_printf("rrb");
}