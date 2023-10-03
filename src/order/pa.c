/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:32:37 by yususato          #+#    #+#             */
/*   Updated: 2023/10/03 19:56:43 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	pa(t_stack *stackA, t_stack *stackB)
{
	int	temp;

	if (stackB->top)
	{
		temp = pop(stackB);
		push(stackA, temp);
		ft_printf("pa\n");
	}
}