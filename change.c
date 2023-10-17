/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:55:18 by yususato          #+#    #+#             */
/*   Updated: 2023/10/16 19:10:35 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	change(t_stack *stack, char **av, int *flag)
{
	int	*t1;
	int	*t2;
	int	*t3;
	int	i;
	int j;
	
	t1 = (int *)malloc(sizeof(int) * stack->max_size);
	t2 = (int *)malloc(sizeof(int) * stack->max_size);
	t3 = (int *)malloc(sizeof(int) * stack->max_size);
	i = 0;
	j = 0;
	if (*flag == -1)
		j = -1;
	while (i < stack->max_size)
	{
		t1[i] = ft_atoi(av[j + 1]);
		t2[i] = ft_atoi(av[j + 1]);
		i++;
		j++;
	}
	bubble(t2, stack->max_size);
	check(stack,t1,t2,t3);
	i = stack->max_size;
	j = 0;
	while (i > 0)
	{
		push(stack, t3[i - 1]);
		i--;
	}
	free(t1);
	free(t2);
	free(t3);
}

void check(t_stack *stack, int *t1, int *t2, int *t3)
{
	int i;
	int	j;
	
	i = 0;
	while (i < stack->max_size)
	{
		j = 0;
		while (j < stack->max_size)
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

void	swap(int *a,int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

void	bubble(int	arr[], int n)
{
	int	i;
	int	j;
	
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
}
