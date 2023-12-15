/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   same.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:32:21 by yususato          #+#    #+#             */
/*   Updated: 2023/10/18 20:25:34 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	int	temp;

	if (stack_a->top && stack_a->top->prev)
	{
		temp = stack_a->top->data;
		stack_a->top->data = stack_a->top->prev->data;
		stack_a->top->prev->data = temp;
	}
	if (stack_b->top && stack_b->top->prev)
	{
		temp = stack_b->top->data;
		stack_b->top->data = stack_b->top->prev->data;
		stack_b->top->prev->data = temp;
	}
	ft_printf("ss\n");
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*node;

	if (stack_a == NULL || stack_a->top == NULL
		|| stack_a->top == stack_a->bottom)
		return ;
	node = stack_a->top;
	stack_a->top = node->prev;
	node->prev = NULL;
	node->next = stack_a->bottom;
	stack_a->bottom->prev = node;
	stack_a->bottom = node;
	if (stack_b == NULL || stack_b->top == NULL
		|| stack_b->top == stack_b->bottom)
		return ;
	node = stack_b->top;
	stack_b->top = node->prev;
	node->prev = NULL;
	node->next = stack_b->bottom;
	stack_b->bottom->prev = node;
	stack_b->bottom = node;
	ft_printf("rr\n");
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*node;

	if (stack_a == NULL || stack_a->top == NULL
		|| stack_a->top == stack_a->bottom)
		return ;
	node = stack_a->bottom;
	stack_a->bottom = node->next;
	node->next = NULL;
	node->prev = stack_a->top;
	stack_a->top->next = node;
	stack_a->top = node;
	if (stack_b == NULL || stack_b->top == NULL
		|| stack_b->top == stack_b->bottom)
		return ;
	node = stack_b->bottom;
	stack_b->bottom = node->next;
	node->next = NULL;
	node->prev = stack_b->top;
	stack_b->top->next = node;
	stack_b->top = node;
	ft_printf("rrr\n");
}
