/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:55:18 by yususato          #+#    #+#             */
/*   Updated: 2023/10/18 20:47:39 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*create_malloc(t_stack *stack)
{
	int	*t;

	t = (int *)malloc(sizeof(int) * stack->max);
	if (t == NULL)
		exit(1);
	return (t);
}

void	stack_push(t_stack *stack, int *t1, int *t2, int *t3)
{
	int	i;

	i = stack->max;
	while (i > 0)
	{
		push(stack, t3[i - 1]);
		i--;
	}
	free(t1);
	free(t2);
	free(t3);
}

void	change(t_stack *stack, char **av, int *flag)
{
	int	*t1;
	int	*t2;
	int	*t3;
	int	i;
	int	j;

	t1 = create_malloc(stack);
	t2 = create_malloc(stack);
	t3 = create_malloc(stack);
	i = 0;
	j = 0;
	if (*flag == -1)
		j = -1;
	while (i < stack->max)
	{
		t1[i] = push_atoi(av[j + 1]);
		t2[i] = push_atoi(av[j + 1]);
		i++;
		j++;
	}
	bubble(t2, stack->max);
	check(stack, t1, t2, t3);
	stack_push(stack, t1, t2, t3);
}

void	check(t_stack *stack, int *t1, int *t2, int *t3)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->max)
	{
		j = 0;
		while (j < stack->max)
		{
			if (t1[i] == t2[j])
			{
				t3[i] = j;
			}
			j++;
		}
		i++;
	}
}
