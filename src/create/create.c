/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:55:30 by yususato          #+#    #+#             */
/*   Updated: 2023/10/16 15:45:05 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_stack(void)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (new == NULL)
		exit(1);
	new->top = NULL;
	new->bottom = NULL;
	new->current_size = 0;
	new->max_size = 0;
	return (new);
}

void	push(t_stack *stack, int data)
{
	t_node		*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (node == NULL)
		exit(1);
	node->data = data;
	node->prev = NULL;
	node->next = stack->top;
	if (stack->top == NULL)
	{
		stack->top = node;
		stack->bottom = node;
	}
	else
	{
		stack->top->next = node;
		node->prev = stack->top; 
		stack->top = node;
	}
	stack->current_size = stack->current_size +1;
}

int	pop(t_stack *stack)
{
	t_node	*node;
	int		data;

	if (!(stack->top))
		exit(1);
	node = stack->top;
	data = node->data;
	if (stack->top == stack->bottom)
	{
		stack->top = NULL;
		stack->bottom = NULL;
	}
	else
	{
		stack->top = stack->top->prev;
		stack->top->next = NULL;
	}
	stack->current_size = stack->current_size - 1;
	free(node);
	return (data);
}