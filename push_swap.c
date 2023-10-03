/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:37:50 by yususato          #+#    #+#             */
/*   Updated: 2023/10/03 17:55:31 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char *av[])
{
	t_stack	*a;

	a = create_stack();
	int i = 1;
	while (i < ac)
	{
		push(a, ft_atoi(av[i]));
		i++;
	}
	sa(a);
	while (i > 1)
	{
		printf("%d\n", a->top->data);
		a->top = a->top->prev;
		i--;
	}
}