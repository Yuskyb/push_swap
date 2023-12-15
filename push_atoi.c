/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:45:16 by yususato          #+#    #+#             */
/*   Updated: 2023/10/18 17:15:28 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	space(const char *str)
{
	if (*str == '\n' || *str == '\t' || *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ')
		return (1);
	else
		return (0);
}

static int	atoi_check(const char *str, int count, long answer)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		answer = answer * 10 + str[i] - '0';
		if (count == 1 && (str[i + 1] >= '0' && str[i + 1] <= '9'))
		{
			if ((answer == INT_MAX / 10 && str[i + 1] - '0' > INT_MAX % 10)
				|| (answer > INT_MAX / 10))
				error();
		}
		else if (count == -1 && (str[i + 1] >= '0' && str[i + 1] <= '9'))
		{
			if (((answer == INT_MAX / 10
						&& str[i + 1] - '0' > INT_MAX % 10 + 1))
				|| (answer > INT_MAX / 10))
				error();
		}
		i++;
	}
	if (str[i] != '\0')
		error();
	return ((int)(answer * count));
}

int	push_atoi(const char *str)
{
	int		count;
	long	answer;

	count = 1;
	answer = 0;
	while (*str != '\0' && space(str) && *str == '+')
		error();
	if (*str == '-')
	{
		count = -1;
		str++;
	}
	if (!('0' <= *str && *str <= '9'))
		error();
	answer = atoi_check(str, count, answer);
	return ((int)(answer));
}
