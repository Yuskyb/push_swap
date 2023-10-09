/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:27:58 by yususato          #+#    #+#             */
/*   Updated: 2023/10/09 18:58:21 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort5(t_stack *stackA, int count)
{
	int	a[count];
	int	i;
		
	while (stackA->bottom->prev)
	{
		a[i] = stackA->data;
		stack->prev;
		i++;
	}
	bubble(a, count);
	while (i>0)
	{
		if (stackA->data == a[count] || stackA->data == a[count - 1])
			pb(stackA);
		stackA->next;
		i--;
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
	j = 0;
	while (i < count)
	{
		while (j < count - i - 1)
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j], arr[j + 1]);
			j++;
		}
		i++;
	}
}