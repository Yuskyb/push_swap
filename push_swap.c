/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:37:50 by yususato          #+#    #+#             */
/*   Updated: 2023/10/16 20:27:36 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	last(char *av)
{
	int i;

	i = 0;
	while (av[i])
	{
		i++;
	}
	if (av[i - 1] == '"')
		return (1);
	else
		return (-1);
}

int main(int ac, char *av[])
{
	int		i;
	int		flag;
	t_stack	*a;

	i = 0;
	// while (av[i])
	// {
	// 	printf("%s\n",av[i]);
	// 	i++;
	// }
	// printf("---------\n");
	i = 0;
	if (ac == 2)
	{
		flag = -1;
		av = ft_split(av[1], ' ');
		while (av[i])
		{
			// printf("%s\n",av[i]);
		i++;
		}
		ac = i + 1;
		// printf("%d\n",ac);
	}
	else
		flag = 0;
		// printf("%d\n",ac);
	a = create_stack();
	a->max_size = ac - 1;
	a->current_size = 0;
	change(a, av, &flag);
	if (a->max_size <= 3)
		sort3(a);
	else if (a->max_size == 5)
		sort5(a);
	else
		divide(a);
}
