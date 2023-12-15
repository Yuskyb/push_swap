/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:56:55 by yususato          #+#    #+#             */
/*   Updated: 2023/10/20 15:04:13 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	bubble(int arr[], int n)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	flag = -1;
	while (i < n)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (arr[j] == arr[j + 1])
				error();
			else if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
				flag = 0;
			}
			j++;
		}
		i++;
	}
	if (flag == -1)
		exit(0);
}
