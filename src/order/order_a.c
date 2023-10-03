/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:47:50 by yususato          #+#    #+#             */
/*   Updated: 2023/10/03 17:57:33 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stackA)
{
	int	temp;

	if (stackA->top && stackA->top->prev)
	{
		temp = stackA->top->data;
		stackA->top->data = stackA->top->prev->data;
		stackA->top->prev->data = temp;
		ft_printf("sa\n");
	}
}
