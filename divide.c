/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:04:50 by yususato          #+#    #+#             */
/*   Updated: 2023/10/17 18:02:57 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	divide(t_stack *stackA)
{
	int p30;
	int p10;
	t_stack	*stackB;

	stackB = create_stack();
	while (stackA->current_size > 3)
	{
		p30 = stackA->current_size * 0.3 + stackA->max_size - stackA->current_size;
		p10 = stackA->current_size * 0.1 + stackA->max_size - stackA->current_size;
		if (stackA->current_size == 6)
			p30 = 2 + stackA->max_size - stackA->current_size;
		if (stackA->current_size == 4)
			p30 = stackA->max_size - stackA->current_size;
		while ((stackA->max_size - stackA->current_size) <= p30)
		{
			if (stackA->top->data <= p30)
			{
				pb(stackA, stackB);
				if (stackB->top->data <= p10)
					rb(stackB);
			}
			else
				ra(stackA);
		}
	}
	sort3(stackA);
	while (stackB->top != NULL)
	{
		if (stackB->top->data == stackB->current_size - 1)
			pa(stackA, stackB);
		else if (search(stackB, stackB->current_size - 1) < stackB->current_size / 2)
			rb(stackB);
		else
			rrb(stackB);
	}
}

int	search(t_stack *stack, int num)
{
	t_node *temp;
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
	if (count == stack->current_size)
	{
		count = -1;
	}
	return (count);
}
