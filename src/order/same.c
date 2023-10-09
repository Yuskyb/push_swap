/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   same.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:32:21 by yususato          #+#    #+#             */
/*   Updated: 2023/10/04 14:55:20 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack *stackA, t_stack *stackB)
{
	sa(stackA);
	sb(stackB);
	ft_printf("ss\n");
}

void	rr(t_stack *stackA, t_stack *stackB)
{
	stackA->nameflag = 1;
	stackB->nameflag = 1;
	
	ra(stackA);
	rb(stackB);
	ft_printf("rr\n");
}

void	rrr(t_stack *stackA, t_stack *stackB)
{
	rra(stackA);
	rrb(stackB);
	ft_printf("rrr\n");
}