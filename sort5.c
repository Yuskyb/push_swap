/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:27:58 by yususato          #+#    #+#             */
/*   Updated: 2023/10/16 19:18:46 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort5(t_stack *stackA)
{
	t_stack	*stackB;

	stackB = create_stack();
	while (!(stackA->top->data == 3 || stackA->top->data == 4))
		ra(stackA);
	pb(stackA, stackB);
	while (!(stackA->top->data == 3 || stackA->top->data == 4))
		ra(stackA);
	pb(stackA, stackB);
	sort3(stackA);
	if (stackB->top > stackB->top->prev)
		rb(stackB);
	while(stackB->top)
		pa(stackA, stackB);
	ra(stackA);
	ra(stackA);
}
