/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 20:25:15 by yususato          #+#    #+#             */
/*   Updated: 2023/10/03 20:26:04 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	pa(t_stack *stackA, t_stack *stackB)
{
	int	temp;

	if (stackA->top)
	{
		temp = pop(stackA);
		push(stackB, temp);
		ft_printf("pb\n");
	}
}