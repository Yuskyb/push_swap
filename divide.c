/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:04:50 by yususato          #+#    #+#             */
/*   Updated: 2023/10/18 20:13:37 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_check(t_stack *stack_a, t_stack *stack_b)
{
	int		p30;
	int		p10;

	while (stack_a->current > 3)
	{
		p30 = stack_a->current * 0.3 + stack_a->max - stack_a->current;
		p10 = stack_a->current * 0.1 + stack_a->max - stack_a->current;
		if (stack_a->current == 6)
			p30 = 2 + stack_a->max - stack_a->current;
		if (stack_a->current == 4)
			p30 = stack_a->max - stack_a->current;
		while ((stack_a->max - stack_a->current) <= p30)
		{
			if (stack_a->top->data <= p30)
			{
				pb(stack_a, stack_b);
				if (stack_b->top->data <= p10)
					rb(stack_b);
			}
			else
				ra(stack_a);
		}
	}
}

void	divide(t_stack *stack_a)
{
	t_stack	*stack_b;

	stack_b = create_stack();
	sort_check(stack_a, stack_b);
	sort3(stack_a);
	while (stack_b->top != NULL)
	{
		if (stack_b->top->data == stack_b->current - 1)
			pa(stack_a, stack_b);
		else if (search(stack_b, stack_b->current - 1) < stack_b->current / 2)
			rb(stack_b);
		else
			rrb(stack_b);
	}
}

int	search(t_stack *stack, int num)
{
	t_node	*temp;
	int		count;

	count = 0;
	temp = stack->top;
	while (temp)
	{
		if (num == temp->data)
			break ;
		temp = temp->prev;
		count++;
	}
	if (count == stack->current)
	{
		count = -1;
	}
	return (count);
}
