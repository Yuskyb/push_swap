/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:47:50 by yususato          #+#    #+#             */
/*   Updated: 2023/10/18 18:25:24 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack_a)
{
	int	temp;

	if (stack_a->top && stack_a->top->prev)
	{
		temp = stack_a->top->data;
		stack_a->top->data = stack_a->top->prev->data;
		stack_a->top->prev->data = temp;
		ft_printf("sa\n");
	}
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	int	temp;

	if (stack_b->top)
	{
		temp = pop(stack_b);
		push(stack_a, temp);
	}
	ft_printf("pa\n");
}

void	ra(t_stack *stack_a)
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
	ft_printf("ra\n");
}

void	rra(t_stack *stack_a)
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
	ft_printf("rra\n");
}
