/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:27:16 by yususato          #+#    #+#             */
/*   Updated: 2023/10/03 14:33:02 by yususato         ###   ########.fr       */
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
