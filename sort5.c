/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:27:58 by yususato          #+#    #+#             */
/*   Updated: 2023/10/20 18:31:55 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort5(t_stack *stack_a)
{
	t_stack	*stack_b;

	stack_b = create_stack();
	while (!(stack_a->top->data == 0 || stack_a->top->data == 1))
		ra(stack_a);
	pb(stack_a, stack_b);
	while (!(stack_a->top->data == 0 || stack_a->top->data == 1))
		ra(stack_a);
	pb(stack_a, stack_b);
	sort3(stack_a);
	if (stack_b->top->data < stack_b->top->prev->data)
		rb(stack_b);
	while (stack_b->top != NULL)
		pa(stack_a, stack_b);
}
