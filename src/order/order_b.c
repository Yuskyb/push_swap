/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:27:16 by yususato          #+#    #+#             */
/*   Updated: 2023/10/18 18:25:51 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack *stack_b)
{
	int	temp;

	if (stack_b->top && stack_b->top->prev)
	{
		temp = stack_b->top->data;
		stack_b->top->data = stack_b->top->prev->data;
		stack_b->top->prev->data = temp;
		ft_printf("sb\n");
	}
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	int	temp;

	if (stack_a->top)
	{
		temp = pop(stack_a);
		push(stack_b, temp);
	}
	ft_printf("pb\n");
}

void	rb(t_stack *stack_b)
{
	t_node	*node;

	if (stack_b == NULL || stack_b->top == NULL
		|| stack_b->top == stack_b->bottom)
		return ;
	node = stack_b->top;
	stack_b->top = node->prev;
	node->prev = NULL;
	node->next = stack_b->bottom;
	stack_b->bottom->prev = node;
	stack_b->bottom = node;
	ft_printf("rb\n");
}

void	rrb(t_stack *stack_b)
{
	t_node	*node;

	if (stack_b == NULL || stack_b->top == NULL
		|| stack_b->top == stack_b->bottom)
		return ;
	node = stack_b->bottom;
	stack_b->bottom = node->next;
	node->next = NULL;
	node->prev = stack_b->top;
	stack_b->top->next = node;
	stack_b->top = node;
	ft_printf("rrb\n");
}
