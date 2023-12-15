/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:37:50 by yususato          #+#    #+#             */
/*   Updated: 2023/10/20 18:04:06 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stack *stack)
{
	if (stack->max == 2)
		sort2(stack);
	else if (stack->max == 3)
		sort3(stack);
	else if (stack->max == 5)
		sort5(stack);
	else
		divide(stack);
}

int	main(int ac, char *av[])
{
	int		i;
	int		flag;
	t_stack	*stack;

	i = 0;
	if (ac == 2)
	{
		flag = -1;
		av = ft_split(av[1], ' ');
		while (av[i])
		i++;
		ac = i + 1;
	}
	else
		flag = 0;
	stack = create_stack();
	stack->max = ac - 1;
	stack->current = 0;
	change(stack, av, &flag);
	sort(stack);
	exit(0);
}
