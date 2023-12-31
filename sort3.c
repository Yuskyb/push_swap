/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:43:07 by yususato          #+#    #+#             */
/*   Updated: 2023/10/20 15:06:38 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(t_stack *stack)
{
	if (stack->top->data > stack->top->prev->data)
		sa(stack);
}

void	sort3(t_stack *stack)
{
	if (stack->top->prev->data < stack->bottom->data)
	{
		if (stack->top->prev->data < stack->top->data)
		{
			if (stack->top->data < stack->bottom->data)
				return (sa(stack));
			else
				return (ra(stack));
		}
		else
			return ;
	}
	else if (stack->top->prev->data < stack->top->data)
		sa(stack);
	rra(stack);
	if (stack->top->prev->data < stack->top->data)
		sa(stack);
}
